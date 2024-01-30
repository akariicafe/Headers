@interface AWDWiFiMetricsManagerBlacklistingInstanceInfo : PBCodable <NSCopying> {
    struct { unsigned char blacklistingTimestamp : 1; unsigned char blacklistingReason : 1; unsigned char reservedInfo : 1; } _has;
}

@property (nonatomic) BOOL hasBlacklistingReason;
@property (nonatomic) unsigned int blacklistingReason;
@property (nonatomic) BOOL hasBlacklistingTimestamp;
@property (nonatomic) unsigned long long blacklistingTimestamp;
@property (nonatomic) BOOL hasReservedInfo;
@property (nonatomic) unsigned int reservedInfo;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
