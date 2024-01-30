@class DMFApplicationPolicyMonitor, ACActivityCenter, NSString, SBSoundController, NSHashTable, NSMutableDictionary, ACUISActivityAlertClient, NSMutableSet, NSMapTable;
@protocol BSInvalidatable;

@interface SBActivityManager : NSObject <ACUISActivityAlertClientDelegate, SBActivityBannerViewControllerDelegate, SBActivityObservable> {
    NSMapTable *_bannerPresentableByActivityIdentifier;
    NSHashTable *_observers;
}

@property (retain, nonatomic) ACActivityCenter *activityCenter;
@property (retain, nonatomic) ACUISActivityAlertClient *activityAlertClient;
@property (retain, nonatomic) id<BSInvalidatable> activitySubscription;
@property (retain, nonatomic) id<BSInvalidatable> activityAlertSubscription;
@property (retain, nonatomic) SBSoundController *soundController;
@property (readonly, nonatomic) DMFApplicationPolicyMonitor *applicationPolicyMonitor;
@property (retain, nonatomic) NSMutableDictionary *prominenceAssertionByActivityIdentifier;
@property (retain, nonatomic) NSMutableSet *prominentAlertPresentingActivities;
@property (retain, nonatomic) NSMutableDictionary *itemByActivityIdentifier;
@property (retain, nonatomic) NSMutableDictionary *itemsByBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_removeAllObservers;
- (id)init;
- (void).cxx_destruct;
- (void)_handleActivityWithContentUpdate:(id)a0;
- (void)_updateAllApplicationMonitoringPolicies;
- (void)_updateForScreenTimeLimitForBundleId:(id)a0 policy:(id)a1;
- (void)_activityFinishedWithContentUpdate:(id)a0;
- (void)_activityStartedWithContentUpdate:(id)a0;
- (void)_addAppActivitiesRecordForBundleId:(id)a0 item:(id)a1;
- (BOOL)_canPresentActivityAlertWithIdentifier:(id)a0;
- (void)_dismissActivityAlert:(id)a0;
- (void)_dismissBannerWithActivityIdentifier:(id)a0;
- (void)_handleActivityAlert:(id)a0 payloadIdentifier:(id)a1 present:(BOOL)a2;
- (void)_handleProminentActivityAlert:(id)a0 prominent:(BOOL)a1;
- (BOOL)_isHostApplicationForegroundWithIdentifier:(id)a0;
- (void)_listenForActivityProminenceWithIdentifier:(id)a0;
- (void)_playSoundWithAlertOptions:(id)a0;
- (void)_postBannerWithActivityIdentifier:(id)a0 payloadIdentifier:(id)a1 prominent:(BOOL)a2 completion:(id /* block */)a3;
- (void)_presentActivityAlert:(id)a0;
- (void)_removeAppActivitiesRecordForBundleId:(id)a0 item:(id)a1;
- (void)_sendAnalyticsEventWithPayloadBuilder:(id /* block */)a0;
- (void)_turnScreenOn:(BOOL)a0 playSound:(BOOL)a1 forAlert:(id)a2;
- (void)activityAlertClient:(id)a0 dismissAlertProvider:(id)a1;
- (void)activityAlertClient:(id)a0 presentAlertProvider:(id)a1 completion:(id /* block */)a2;
- (void)activityBannerDidDisappear:(id)a0 activityIdentifier:(id)a1;
- (void)cancelObservingActivityUpdates;
- (BOOL)isActivitySupported;
- (void)startObservingActivityUpdates;

@end
