@class NSString;

@interface NTPBRestorePaidSubscriptionItem : PBCodable <NSCopying> {
    struct { unsigned char isNewsAppPurchase : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRestoredPaidSubscriptionChannelId;
@property (retain, nonatomic) NSString *restoredPaidSubscriptionChannelId;
@property (nonatomic) BOOL hasIsNewsAppPurchase;
@property (nonatomic) BOOL isNewsAppPurchase;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
