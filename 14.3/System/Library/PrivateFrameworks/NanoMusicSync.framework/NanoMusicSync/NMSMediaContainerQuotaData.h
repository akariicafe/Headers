@interface NMSMediaContainerQuotaData : NSObject

@property (nonatomic) unsigned long long numItemsAdded;
@property (nonatomic) BOOL hasSkippedItems;
@property (nonatomic) BOOL hasRemovedItems;
@property (weak, nonatomic) id quotaRefObj;
@property (readonly, nonatomic) BOOL hasItemsAboveQuota;

- (void).cxx_destruct;

@end
