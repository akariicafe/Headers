@class RERelevanceEngine, NSString, REUpNextScheduler, NSMutableSet, NSObject, REDonatedActionFilteredCache;
@protocol OS_dispatch_queue, REMLElementRanker;

@interface REDonatedActionsApplicationStore : NSObject <REDonatedActionFilteredCacheDelegate> {
    REDonatedActionFilteredCache *_cache;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_applicationScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_applications;
    RERelevanceEngine *_filteringEngine;
    id<REMLElementRanker> _elementRanker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_notify;
- (id)initWithLocationManager:(id)a0;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)a0 actionIdentifier:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchFirstPerformedActionDate:(id /* block */)a0;
- (void)fetchDonationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)donatedActionFilteredCacheDonationRemoved;
- (void)donatedActionFilteredCacheDidAddDonation:(id)a0;
- (void)donatedActionFilteredCacheCountDidChange;
- (void)_notifyApplicationsUpdates;
- (void)_queue_loadApplicationsIfNeededWithCompletion:(id /* block */)a0;
- (BOOL)_shouldFilterDonation:(id)a0;
- (void)_sortDonationsByCount:(id)a0 completion:(id /* block */)a1;
- (void)fetchApplicationsProvidingDonations:(id /* block */)a0;
- (void)fetchTopDonationsForApplications:(id)a0 fromOnlyRecentPlatform:(BOOL)a1 block:(id /* block */)a2;
- (void)fetchAllUniqueDonationsWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)fetchPerformedCountForAction:(id)a0 completion:(id /* block */)a1;

@end
