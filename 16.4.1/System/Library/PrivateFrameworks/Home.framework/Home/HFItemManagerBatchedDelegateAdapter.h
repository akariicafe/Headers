@class HFItemManager, NSMutableSet, NAFuture;
@protocol HFCharacteristicReadPolicy;

@interface HFItemManagerBatchedDelegateAdapter : NSObject

@property (retain, nonatomic) NSMutableSet *uncommittedBatchingReasons;
@property (retain, nonatomic) NSMutableSet *batchedItemsToUpdate;
@property (retain, nonatomic) NSMutableSet *batchedItemProviderInvalidationReasons;
@property (nonatomic) SEL batchedSenderSelector;
@property (retain, nonatomic) NAFuture *startExecutingBatchFuture;
@property (retain, nonatomic) NAFuture *finishExecutingBatchFuture;
@property (readonly, weak, nonatomic) HFItemManager *itemManager;
@property (retain, nonatomic) id<HFCharacteristicReadPolicy> readPolicy;
@property (readonly, nonatomic) BOOL hasUncommittedBatchingReasons;

- (void)_reset;
- (void).cxx_destruct;
- (id)initWithItemManager:(id)a0 readPolicy:(id)a1;
- (void)_executeBatch;
- (id)_itemProvidersToReloadForInvalidationReasons:(id)a0;
- (void)beginBatchWithReason:(id)a0;
- (id)commitBatchWithReason:(id)a0 senderSelector:(SEL)a1;
- (id)requestUpdateForItems:(id)a0 itemProviderInvalidationReasons:(id)a1 modifiedHome:(id)a2 senderSelector:(SEL)a3;

@end
