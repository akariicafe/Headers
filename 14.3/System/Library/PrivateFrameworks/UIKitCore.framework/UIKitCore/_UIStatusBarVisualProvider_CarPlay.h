@class _UIStatusBarRegion, NSString, _UIStatusBar;

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider>

@property (retain, nonatomic) _UIStatusBarRegion *timeRegion;
@property (retain, nonatomic) _UIStatusBarRegion *radarRegion;
@property (nonatomic) BOOL showingSensorActivityIndicator;
@property (nonatomic) BOOL showingPill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;
+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (id)setupInContainerView:(id)a0;
- (void).cxx_destruct;
- (id)condensedFontForCellularType:(long long)a0 defaultFont:(id)a1 baselineOffset:(double *)a2;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (id)willUpdateWithData:(id)a0;
- (id)_animationForQuietMode;
- (BOOL)showSensorActivityIndicatorWithoutPortalView;
- (id)_animationForPillTime;
- (id)_animationForBackgroundActivityPill;
- (id)_animationForSensorIndicator;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (void)itemCreated:(id)a0;
- (id)styleAttributesForStyle:(long long)a0;

@end
