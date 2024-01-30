@class REUpNextScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface REDonatedActionStore : REObservableSingleton {
    BOOL _isMonitoringLockState;
    BOOL _synchronized;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextScheduler *_donationsScheduler;
    REUpNextScheduler *_deletionsScheduler;
}

- (id)_init;
- (id)callbackQueue;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (void)synchronizeDonationsIfNecessary;
- (void)_beginLoadingData;
- (void)_finishLoadingData:(unsigned long long)a0;
- (void)_notified_addDonatedActionsForInstalledApps:(id)a0;
- (void)_notified_distributeRecentDeletedActions:(id)a0;
- (void)_notified_distributeRecentDonatedActions:(id)a0;
- (void)_notified_removeDonatedActionsForUninstalledApps:(id)a0;
- (void)_notified_removeThenDistributeAllActions:(id)a0;
- (void)_queue_distributeAllDonatedActions;
- (void)_queue_distributeAllDonatedActionsWithIdentifier:(id)a0;
- (void)_queue_distributeRecentDeletedActions;
- (void)_queue_distributeRecentDonatedActions;
- (BOOL)_shouldLimitQueries;
- (void)_subscribeToNotifications;
- (void)fetchDonationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)triggerDistributeAllDonatedActions:(BOOL)a0;

@end
