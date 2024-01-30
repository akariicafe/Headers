@class TPKEligibleContentsMonitoringController, TPKContent, NSString, NSHashTable, TPKContentPopoverViewController, NSDate, TPSMiniTipContentManager, NSObject;
@protocol OS_dispatch_queue;

@interface TPKContentController : NSObject <TPKContentViewDelegate, TPKEligibleContentsMonitoringControllerDelegate> {
    BOOL _registeredApplicationStateNotification;
    NSDate *_nextAllowedCheckDate;
    NSDate *_lastContentValidateDate;
}

@property (class, weak, nonatomic) TPKContentController *notifiedContentController;

@property (retain, nonatomic) TPKEligibleContentsMonitoringController *eligibleContentsMonitoringController;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSString *testContentTitle;
@property (retain, nonatomic) NSString *testContentText;
@property (retain, nonatomic, getter=_contentTitle, setter=_setContentTitle:) NSString *_contentTitle;
@property (retain, nonatomic, getter=_contentText, setter=_setContentText:) NSString *_contentText;
@property (nonatomic) BOOL didEnterBackground;
@property (nonatomic) BOOL contentCheckInProgress;
@property (nonatomic) BOOL contentDidDisplayDelayInProgress;
@property (nonatomic) BOOL displayTestContent;
@property (readonly, nonatomic) BOOL allowsOverrides;
@property (nonatomic) long long state;
@property (nonatomic) long long dismissalReason;
@property (copy, nonatomic) TPKContent *content;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQueue;
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *lastRestartDisplayTrackingIdentifier;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) TPSMiniTipContentManager *miniTipContentManager;
@property (retain, nonatomic) NSString *testContentTitle;
@property (retain, nonatomic) NSString *testContentText;
@property (retain, nonatomic) TPKEligibleContentsMonitoringController *eligibleContentsMonitoringController;
@property (retain, nonatomic) TPKContentPopoverViewController *currentPopOverController;
@property (readonly, nonatomic) BOOL contentDismissedByUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_setNotifyForDisplayForController:(id)a0;
+ (void)_resetNotifyForDisplayForController:(id)a0;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)contentView:(id)a0 needsLayoutForReason:(long long)a1;
- (void)_notifyDelegate:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void)contentViewCloseButtonTapped:(id)a0;
- (void)eligibleContentsMonitoringController:(id)a0 shouldDisplayContent:(id)a1 animated:(BOOL)a2;
- (void)_evaluateClientContextMap:(id)a0 forKeys:(id)a1;
- (id)_createContentViewWithContent:(id)a0 asPopover:(BOOL)a1;
- (id)content;
- (void)_isContentValid:(id)a0 synchronous:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)showTestContent;
- (void)unregisterApplicationStateNotification;
- (void)notifyContentForDisplay:(id)a0 immediateContent:(BOOL)a1 animated:(BOOL)a2;
- (void)invalidateClientContextIfNeeded;
- (void)removeDelegate:(id)a0 content:(id)a1;
- (void)displayContent:(id)a0 synchronous:(BOOL)a1 animated:(BOOL)a2;
- (id)eligibleContentsMonitoringController:(id)a0 clientContextMapForKeys:(id)a1;
- (void)contentView:(id)a0 actionTapped:(id)a1;
- (BOOL)prepareTipContent:(id)a0 bundleID:(id)a1;
- (void)cancelContentDisplayDelay;
- (void)notifyDelegate:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (void)addDelegate:(id)a0 content:(id)a1;
- (void)addDelegate:(id)a0;
- (void)scheduleContentDisplayDelay;
- (void)_notifyDelegate:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (id)initWithContext:(id)a0;
- (void)eligibleContentsMonitoringController:(id)a0 shouldDismissContent:(id)a1 reason:(long long)a2;
- (id)createContentViewWithContent:(id)a0;
- (id)contentView:(id)a0 iconForCustomizationID:(long long)a1;
- (id)createContentViewControllerWithContent:(id)a0 sourceViewController:(id)a1;
- (void)contentView:(id)a0 viewTappedForIdentifier:(id)a1;
- (BOOL)_isEligibleImmediateContentAvailableError:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)eligibleContentsMonitoringController:(id)a0 restartTrackingForContents:(id)a1;
- (void)contentDisplayDelay;
- (void)contentViewWillBeShown:(id)a0;
- (void)_contentDidDismiss:(id)a0;
- (id)contentView:(id)a0 personalizedStringForID:(long long)a1;
- (void)checkCurrentEligibility;
- (void)contentViewWasCreated:(id)a0;
- (void)_contentDidDisplay:(id)a0;
- (void)notifyDelegate:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void)dismissContent:(id)a0 reason:(long long)a1;
- (void)contentViewWillBeRemoved:(id)a0;
- (void)checkForContent;
- (void).cxx_destruct;
- (void)notifyEventOccurred:(long long)a0 content:(id)a1 context:(id)a2;
- (void)registerCustomContentView:(id)a0;
- (id)createContentViewWithContent:(id)a0 annotatedView:(id)a1;
- (void)registerApplicationStateNotification;

@end
