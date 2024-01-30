@class SBIcon, NSString, _UILegibilitySettings, NSArray, UIView, APUIAppPredictionViewController, NSHashTable, UIViewController;
@protocol SBLeafIconDataSource;

@interface SBHAppPredictionWrapperViewController : UIViewController <SBHMultiplexingViewControllerObserver, SBIconViewCustomImageViewControlling> {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) unsigned long long backgroundAnimationCount;
@property (readonly, nonatomic) UIViewController *multiplexingViewController;
@property (readonly, weak, nonatomic) APUIAppPredictionViewController *appPredictionViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, nonatomic) id<SBLeafIconDataSource> visiblyActiveDataSource;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, getter=isBackgroundBlurEnabled) BOOL backgroundBlurEnabled;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (copy, nonatomic) id /* block */ backgroundViewProvider;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) BOOL wantsLabelHidden;
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic) unsigned long long pauseReasons;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL showsSquareCorners;

- (id)_widgetContextMenuController;
- (void)_updateWidgetViewHitTesting;
- (void)didSelectApplicationShortcutItem:(id)a0;
- (void).cxx_destruct;
- (id)sourceView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)loadView;
- (id)initWithIcon:(id)a0 location:(id)a1 multiplexingViewController:(id)a2 appPredictionViewController:(id)a3;
- (unsigned long long)expectedAppPredictionViewControllerMode;
- (void)_updateAppPredictionViewControllerModeAnimated:(BOOL)a0;
- (void)_setBackgroundViewWeighting:(double)a0;
- (void)multiplexingViewControllerDidActivate:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)removeCustomImageViewControllerObserver:(id)a0;
- (void)addCustomImageViewControllerObserver:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;

@end
