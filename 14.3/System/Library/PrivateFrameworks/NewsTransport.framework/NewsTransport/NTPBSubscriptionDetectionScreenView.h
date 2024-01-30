@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {
    struct { unsigned char countOfSubscriptionsDetected : 1; } _has;
}

@property (nonatomic) BOOL hasCountOfSubscriptionsDetected;
@property (nonatomic) int countOfSubscriptionsDetected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
