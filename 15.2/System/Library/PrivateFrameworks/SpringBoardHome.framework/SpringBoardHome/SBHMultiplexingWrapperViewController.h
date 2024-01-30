@class SBIcon, NSString, _UILegibilitySettings, NSArray, UIView, APUIAppPredictionViewController, NSHashTable, UIViewController;
@protocol SBHMultiplexingWrapperViewControllerDelegate, SBLeafIconDataSource;

@interface SBHMultiplexingWrapperViewController : UIViewController <SBHMultiplexingViewControllerObserver, SBIconViewCustomImageViewControlling> {
    NSHashTable *_observers;
}

@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) unsigned long long backgroundAnimationCount;
@property (weak, nonatomic) id<SBHMultiplexingWrapperViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIViewController *multiplexingViewController;
@property (readonly, weak, nonatomic) APUIAppPredictionViewController *appPredictionViewController;
@property (readonly, nonatomic) unsigned long long component;
@property (readonly, nonatomic) BOOL canAlignWithGrid;
@property (readonly, nonatomic, getter=isGridAligned) BOOL gridAligned;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, nonatomic) id<SBLeafIconDataSource> visiblyActiveDataSource;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (copy, nonatomic) id /* block */ backgroundViewProvider;
@property (copy, nonatomic) id /* block */ backgroundViewConfigurator;
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (nonatomic) double brightness;
@property (readonly, nonatomic) BOOL wantsLabelHidden;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) unsigned long long imageViewAlignment;
@property (nonatomic) unsigned long long pauseReasons;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } minimumPreferredEdgeInsetsForContextMenu;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long horizontal; unsigned long long vertical; } approximateLayoutPosition;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleBounds;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (nonatomic) BOOL showsSquareCorners;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)_configureBackgroundViewIfNecessary;
- (BOOL)_canShowWhileLocked;
- (void)removeCustomImageViewControllerObserver:(id)a0;
- (void)loadView;
- (void)_updateWidgetViewHitTesting;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)sourceView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)multiplexingViewControllerDidActivate:(id)a0;
- (void)didSelectApplicationShortcutItem:(id)a0;
- (void)addCustomImageViewControllerObserver:(id)a0;
- (id)_widgetContextMenuController;
- (void)_updateEdgeAntialiasing;
- (id)initWithIcon:(id)a0 location:(id)a1 multiplexingViewController:(id)a2 appPredictionViewController:(id)a3 canAlignWithGrid:(BOOL)a4;
- (id)initWithIcon:(id)a0 location:(id)a1 multiplexingViewController:(id)a2 component:(unsigned long long)a3;
- (unsigned long long)expectedAppPredictionViewControllerMode;
- (void)_updateMultiplexingViewControllerModeAnimated:(BOOL)a0;
- (void)_setBackgroundViewWeighting:(double)a0;
- (void)_updateApproximateWidgetPosition;
- (void)_updateBackgroundViewWeighting;

@end
