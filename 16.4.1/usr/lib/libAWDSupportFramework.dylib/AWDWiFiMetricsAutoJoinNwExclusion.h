@interface AWDWiFiMetricsAutoJoinNwExclusion : PBCodable <NSCopying> {
    struct { unsigned char reasonCode : 1; unsigned char rssi : 1; unsigned char usageRank : 1; } _has;
}

@property (nonatomic) BOOL hasReasonCode;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasUsageRank;
@property (nonatomic) unsigned int usageRank;

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
