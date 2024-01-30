@class NSString, NSMapTable, NSDate, NSObject;
@protocol OS_dispatch_queue, REDonatedActionFilteredCacheDelegate;

@interface REDonatedActionFilteredCache : NSObject <REDonatedActionStoreObserver> {
    NSMapTable *_countsByActionType;
    NSMapTable *_countPerformedTodayByActionType;
    NSMapTable *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_firstDonationDate;
}

@property (weak, nonatomic) id<REDonatedActionFilteredCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)reset;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)a0 actionIdentifier:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchFirstPerformedActionDate:(id /* block */)a0;
- (void)donationActionStoreReceivedDonation:(id)a0 isNewDonation:(BOOL)a1;
- (void)donationActionStoreRemovedDonation:(id)a0;
- (void)donationActionStoreRemovedDonationsFor:(id)a0;
- (void)donationActionStoreRemoveAllDonations;
- (void)fetchDonationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_refreshAllDonations:(id)a0;
- (id)_keyForAction:(id)a0;
- (unsigned long long)_queue_performedCountForDonation:(id)a0;
- (unsigned long long)_queue_performedTodayCountForBundleIdentifer:(id)a0 actionIdentifier:(unsigned long long)a1;
- (void)_queue_removeAllData;
- (void)_queue_storeDonation:(id)a0;
- (void)_queue_removeDonation:(id)a0;
- (void)_queue_removeDonationsForBundleIdentifier:(id)a0;
- (void)_queue_incrementPerformedCountForDonation:(id)a0;
- (void)fetchAllUniqueActions:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchCountForAction:(id)a0 usingBlock:(id /* block */)a1;
- (void)fetchPerformedCountForAction:(id)a0 usingBlock:(id /* block */)a1;

@end
