@class FLFollowUpController;
@protocol NSObject;

@interface BYFlowSkipController : NSObject {
    BOOL _basicFunctionalityEnabled_doNotAccessDirectly;
    FLFollowUpController *_followUpController_doNotAccessDirectly;
    id<NSObject> _wfNetworkChangeObserver;
}

+ (id)sharedInstance;
+ (id)_modelSpecificLocalizedStringKeyForKey:(id)a0;
+ (id)_supportedIdentifiers;
+ (id)_actionForFlowSkipIdentifiers:(id)a0;
+ (id)_localizedStringListingFlowSkipIdentifiers:(id)a0;
+ (id)_flowSkipIdentifierFromActionIdentifier:(id)a0;
+ (id)_actionIdentifierForFlowSkipIdentifier:(id)a0;
+ (void)_setShouldObserveChangeFromNetworkSSID:(id)a0;
+ (BOOL)_shouldObserveChangeFromNetworkSSID:(id *)a0;
+ (void)_clearShouldObserveChangeFromNetworkSSID;
+ (id)flowSkipIdentifiersFromFollowUpAction:(id)a0;

- (id)_followUpController;
- (BOOL)_isPasscodeSet;
- (void).cxx_destruct;
- (id)init;
- (void)registerActivities;
- (void)unregisterActivities;
- (void)observeFinishSetupTriggers;
- (BOOL)_isBasicFunctionalityEnabled;
- (id)_pendingFollowUpItem;
- (void)_postFollowUpItemForFlowSkipIdentifiers:(id)a0 previousFollowUpItem:(id)a1 forceNotification:(BOOL)a2;
- (long long)_timeIntervalForNotifications;
- (long long)_timeIntervalForFrequentNotifications;
- (void)didCompleteFlow:(id)a0;
- (void)_persistInitialNetworkSSID;
- (void)_repostExistingFollowUpItemForcingNotification:(id)a0;
- (long long)_timeoutForWifiObserver;
- (long long)_timeIntervalForWifiObserver;
- (void)_regsiterWiFiObserverActivityWithNeedsActivity:(BOOL)a0 handlerQueue:(id)a1;
- (void)revisePendingFollowUpsForcingRepost:(BOOL)a0;
- (void)setBasicFunctionalityEnabled:(BOOL)a0;
- (void)didSkipFlow:(id)a0;
- (void)cancelPendingFlows;
- (void)passcodeDidChange;
- (id)getFlowSkipIdentifiers;

@end
