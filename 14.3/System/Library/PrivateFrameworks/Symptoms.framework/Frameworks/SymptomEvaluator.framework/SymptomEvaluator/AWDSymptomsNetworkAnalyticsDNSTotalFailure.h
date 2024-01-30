@interface AWDSymptomsNetworkAnalyticsDNSTotalFailure : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dnsServers : 1; unsigned char networkType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasDnsServers;
@property (nonatomic) unsigned int dnsServers;

- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
