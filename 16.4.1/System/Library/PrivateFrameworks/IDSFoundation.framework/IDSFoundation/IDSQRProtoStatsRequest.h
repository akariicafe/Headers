@interface IDSQRProtoStatsRequest : PBRequest <NSCopying> {
    struct { unsigned char clientLatencyMs : 1; unsigned char receivedPackets : 1; unsigned char sentPackets : 1; } _has;
}

@property (nonatomic) unsigned int clientTimestampNtp;
@property (nonatomic) BOOL hasClientLatencyMs;
@property (nonatomic) unsigned int clientLatencyMs;
@property (nonatomic) BOOL hasSentPackets;
@property (nonatomic) unsigned int sentPackets;
@property (nonatomic) BOOL hasReceivedPackets;
@property (nonatomic) unsigned int receivedPackets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
