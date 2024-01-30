@class NSString;

@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying> {
    struct { unsigned char isNewsAppPurchase : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRestoredPaidSubscriptionChannelId;
@property (retain, nonatomic) NSString *restoredPaidSubscriptionChannelId;
@property (nonatomic) BOOL hasIsNewsAppPurchase;
@property (nonatomic) BOOL isNewsAppPurchase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
