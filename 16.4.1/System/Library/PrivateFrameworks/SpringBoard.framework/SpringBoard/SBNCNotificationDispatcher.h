@class NCBulletinNotificationSource, SBNotificationBannerDestination, SBNCAlertingController, SBCommunicationPolicyManager, NCNotificationDispatcher, SBUserAlertNotificationSource, SBNCNotificationDispatcherDelegate, SBLockStateAggregator, BSServiceConnectionEndpoint, NSString, SBNotificationCenterDestination, SBLockScreenManager, SBWalletNotificationSource, SBNotificationCarPlayDestination;
@protocol SBNotificationDestination;

@interface SBNCNotificationDispatcher : NSObject <CSCoverSheetViewControllerObserver, SBFNotificationExtensionVisibilityProviding>

@property (retain, nonatomic) NCNotificationDispatcher *dispatcher;
@property (retain, nonatomic) SBNCNotificationDispatcherDelegate *dispatcherDelegate;
@property (retain, nonatomic) NCBulletinNotificationSource *notificationSource;
@property (retain, nonatomic) SBUserAlertNotificationSource *userNotificationAlertSource;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic) SBNotificationCarPlayDestination *carDestination;
@property (retain, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager;
@property (retain, nonatomic) SBNCAlertingController *alertingController;
@property (readonly, nonatomic) SBNotificationBannerDestination *bannerDestination;
@property (readonly, nonatomic) id<SBNotificationDestination> dashBoardDestination;
@property (readonly, nonatomic) SBWalletNotificationSource *walletNotificationSource;
@property (readonly, nonatomic) SBNotificationCenterDestination *notificationCenterDestination;
@property (readonly, nonatomic) BOOL isCarDestinationActive;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *carOpenServiceEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)coverSheetViewController:(id)a0 didChangeActiveBehavior:(id)a1;
- (BOOL)isNotificationContentExtensionVisible:(id)a0;
- (void)_carPlayDestinationAvailabilityDidChange;
- (id)keyWindowForScreen:(id)a0;
- (BOOL)_lockScreenWantsBanners;
- (void)_aggregateLockStateDidChange;
- (void)_setupNewDestinationsForDispatcher:(id)a0;
- (id)init;
- (void)_updateActiveDestinations;
- (void).cxx_destruct;

@end
