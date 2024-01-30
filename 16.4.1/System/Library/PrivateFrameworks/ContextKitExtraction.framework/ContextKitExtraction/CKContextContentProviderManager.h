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

+ (void)_observeApplicationStateNotifications;
+ (BOOL)isSafariContentProvider;
+ (unsigned long long)optionsForControlCode:(unsigned char)a0;
+ (BOOL)isSpringBoard;
+ (id)sharedManager;
+ (unsigned char)controlCodeForNonce:(unsigned long long)a0;

- (void)removeProvider:(id)a0;
- (void)addProvider:(id)a0;
- (void)_prepareAndExtractContentForUserActivity:(id)a0 bundleIdentifier:(id)a1;
- (void)_queueActivityForReporting:(id)a0;
- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 isRecentsCapture:(BOOL)a2 andReply:(id /* block */)a3;
- (BOOL)_isDonationAllowedWithControlCode:(unsigned char)a0;
- (void)_dequeueActivityForReporting:(id)a0;
- (void)userActivityWasInvalidated:(id)a0;
- (void)_prepareAndDonateUserActivity:(id)a0;
- (void)userActivityWasCreated:(id)a0;
- (id)_formContextUserActivityFromUserActivity:(id)a0;
- (void)_hasForegroundActiveContentWithReply:(id /* block */)a0;
- (void)userActivityDidBecomeCurrent:(id)a0 current:(BOOL)a1;
- (void)_loadContextKitIfNecessaryWithExecutor:(id)a0;
- (BOOL)_hasQueuedForReportingActivity:(id)a0;
- (void)scheduleUserActivityRecordingWithUserActivity:(id)a0;
- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 isRecentsCapture:(BOOL)a2 requiringMainQueue:(BOOL)a3 andReply:(id /* block */)a4;
- (BOOL)_isActivityReportingAllowedForCurrentBundleIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)providerCount;

@end
