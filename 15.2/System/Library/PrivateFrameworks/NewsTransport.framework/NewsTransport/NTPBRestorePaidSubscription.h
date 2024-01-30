@class NSMutableArray;

@interface NTPBRestorePaidSubscription : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *restoredPaidSubscriptionChannelIds;
@property (retain, nonatomic) NSMutableArray *items;

+ (Class)restoredPaidSubscriptionChannelIdsType;
+ (Class)itemsType;

- (void)addItems:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (unsigned long long)itemsCount;
- (void)addRestoredPaidSubscriptionChannelIds:(id)a0;
- (void)clearRestoredPaidSubscriptionChannelIds;
- (unsigned long long)restoredPaidSubscriptionChannelIdsCount;
- (id)restoredPaidSubscriptionChannelIdsAtIndex:(unsigned long long)a0;
- (void)clearItems;
- (id)itemsAtIndex:(unsigned long long)a0;

@end
