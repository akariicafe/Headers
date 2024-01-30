@class NSString, UIViewController;

@interface SBHWidgetContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *widgetViewController;
@property (readonly, nonatomic) unsigned long long gridSizeClass;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) unsigned long long presentationMode;

- (id)widgetContextMenuController;
- (void).cxx_destruct;
- (id)initWithWidgetViewController:(id)a0 gridSizeClass:(unsigned long long)a1 applicationName:(id)a2;
- (void)loadView;
- (id)snapshotView;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (id)_avocadoViewController;
- (id)widgetContainerView;
- (BOOL)_canShowWhileLocked;

@end
