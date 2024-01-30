@class NSString, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CKContextContentProviderManager : NSObject <NSUserActivityObserver> {
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_activityReportingQueue;
    NSMutableArray *_userActivitiesQueuedForReporting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSpringBoard;
+ (void)_observeApplicationStateNotifications;
+ (unsigned char)controlCodeForNonce:(unsigned long long)a0;
+ (unsigned long long)optionsForControlCode:(unsigned char)a0;
+ (id)sharedManager;
+ (BOOL)isSafariContentProvider;

- (void)removeProvider:(id)a0;
- (void)addProvider:(id)a0;
- (BOOL)_hasQueuedForReportingActivity:(id)a0;
- (BOOL)_hasForegroundActiveContent;
- (unsigned long long)providerCount;
- (void)userActivityWasCreated:(id)a0;
- (void)userActivityDidBecomeCurrent:(id)a0 current:(BOOL)a1;
- (void)_dequeueActivityForReporting:(id)a0;
- (void)_queueActivityForReporting:(id)a0;
- (void)_prepareAndDonateUserActivity:(id)a0 forBundleIdentifier:(id)a1;
- (BOOL)_isDonationAllowedWithControlCode:(unsigned char)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_formContextUserActivityFromUserActivity:(id)a0;
- (void)userActivityWasInvalidated:(id)a0;
- (void)_loadContextKitIfNecessaryWithExecutor:(id)a0;
- (BOOL)_isActivityReportingAllowedForCurrentBundleIdentifier:(id)a0;
- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 andReply:(id /* block */)a2;
- (void)scheduleUserActivityRecordingWithUserActivity:(id)a0;

@end
