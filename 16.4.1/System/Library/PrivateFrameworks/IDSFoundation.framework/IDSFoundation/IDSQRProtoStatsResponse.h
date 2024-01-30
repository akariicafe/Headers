@interface IDSQRProtoStatsResponse : PBCodable <NSCopying> {
    struct { unsigned char serverTimestampMs : 1; unsigned char receivedPackets : 1; unsigned char sentPackets : 1; unsigned char uplinkBandwidth : 1; } _has;
}

@property (nonatomic) unsigned int clientTimestampNtp;
@property (nonatomic) BOOL hasServerTimestampMs;
@property (nonatomic) unsigned long long serverTimestampMs;
@property (nonatomic) BOOL hasSentPackets;
@property (nonatomic) unsigned int sentPackets;
@property (nonatomic) BOOL hasReceivedPackets;
@property (nonatomic) unsigned int receivedPackets;
@property (nonatomic) BOOL hasUplinkBandwidth;
@property (nonatomic) unsigned int uplinkBandwidth;

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
