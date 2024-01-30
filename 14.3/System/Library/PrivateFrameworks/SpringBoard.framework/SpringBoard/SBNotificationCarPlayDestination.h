@class NSHashTable, BSServiceConnectionEndpoint, NSString, DNDEventBehaviorResolutionService, CRCarPlayAppPolicyEvaluator, NSMutableDictionary, NCCarPlayBannerSource, BNBannerHostMonitorListener;
@protocol BNPresentable, NCNotificationAlertDestinationDelegate;

@interface SBNotificationCarPlayDestination : NSObject <BNBannerHostMonitorListenerObserving, BNPresentableObserving, NCCarPlayBannerPresentableViewControllerDelegate, NCNotificationAlertDestination> {
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    BNBannerHostMonitorListener *_bannerHostMonitorListener;
    NSHashTable *_presentables;
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;
    NSMutableDictionary *_appPolicyForBundleID;
    id<BNPresentable> _presentablePresentingAlertController;
}

@property (readonly, nonatomic, getter=_carPlayBannerSource) NCCarPlayBannerSource *carPlayBannerSource;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationAlertDestinationDelegate> delegate;
@property (readonly, nonatomic, getter=isAlertDestination) BOOL alertDestination;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;

- (void)postNotificationRequest:(id)a0;
- (void)modifyNotificationRequest:(id)a0;
- (BOOL)canReceiveNotificationRequest:(id)a0;
- (void)withdrawNotificationRequest:(id)a0;
- (void)_addPresentable:(id)a0;
- (void)bannerHostDidBecomeUnavailableForMonitorListener:(id)a0;
- (id)_newPresentableForNotificationRequest:(id)a0 layoutDescription:(id)a1;
- (id)_policyForApp:(id)a0;
- (id)init;
- (void)_callOrFaceTimeStateChanged;
- (void).cxx_destruct;
- (void)didSelectBannerOfPresentableViewController:(id)a0;
- (id)_closeNotificationActionForNotificationRequest:(id)a0;
- (void)dealloc;
- (BOOL)_notificationRequestSupportsSubActions:(id)a0;
- (BOOL)_notificationRequestShouldShowModalSubActions:(id)a0;
- (long long)_effectiveDefaultActionTypeForNotificationRequest:(id)a0;
- (id)_allNotificationActionsForNotificationRequest:(id)a0;
- (id /* block */)_ignoreActionForNotificationRequest:(id)a0;
- (BOOL)_inCallOrFaceTime;
- (id)keyWindowForScreen:(id)a0;
- (BOOL)_setSuspended:(BOOL)a0 forPresentingAlertControllerForPresentable:(id)a1;
- (BOOL)presentableViewControllerClosesByDefault:(id)a0;
- (id)_appPolicyEvaluator;
- (id)_presentablesWithRequestIdentifier:(id)a0;
- (id)_removePresentable:(id)a0;
- (long long)_defaultActionTypeForNotificationRequest:(id)a0;
- (id)_subActionsForNotificationRequest:(id)a0;
- (void)didCancelBannerOfPresentableViewController:(id)a0 reason:(id)a1;
- (void)presentableWillAppearAsBanner:(id)a0;
- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (id)_supplementaryActionsForNotificationRequest:(id)a0;
- (id)_subActionLabelsForNotificationRequest:(id)a0;
- (void)bannerHostDidBecomeAvailableForMonitorListener:(id)a0;
- (id)_bulletinForNotificationRequest:(id)a0;
- (id /* block */)_actionForNotificationRequest:(id)a0;

@end
