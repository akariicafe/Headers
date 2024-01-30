@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)restoredPaidSubscriptionChannelIdsType;
+ (Class)itemsType;

- (id)itemsAtIndex:(unsigned long long)a0;
- (unsigned long long)itemsCount;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)addItems:(id)a0;
- (void)clearItems;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addRestoredPaidSubscriptionChannelIds:(id)a0;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;

@end
