@interface ATXPBNotificationSmartPauseSuggestion : PBCodable <NSCopying> {
    struct { unsigned char expirationTimestamp : 1; unsigned char pauseDuration : 1; } _has;
}

@property (nonatomic) BOOL hasExpirationTimestamp;
@property (nonatomic) double expirationTimestamp;
@property (nonatomic) BOOL hasPauseDuration;
@property (nonatomic) double pauseDuration;

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
