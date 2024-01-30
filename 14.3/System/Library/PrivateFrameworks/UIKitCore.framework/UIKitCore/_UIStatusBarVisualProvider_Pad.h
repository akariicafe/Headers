@class _UIStatusBarDisplayItemPlacement, NSString, NSDictionary, NSLayoutConstraint, _UIStatusBar;

@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS <_UIStatusBarRegionCursorInsetProvider>

@property (class, readonly) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } expandedEdgeInsets;
@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } regionCursorInsets;
@property (class, readonly, nonatomic) BOOL regionCursorIsPill;
@property (class, readonly, nonatomic) double regionCursorCornerRadius;

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *datePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *timePlacement;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)baselineOffset;
+ (struct CGSize { double x0; double x1; })pillSize;
+ (id)normalFont;
+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;
+ (double)height;
+ (id)pillSmallFont;
+ (id)pillFont;
+ (double)regionSpacing;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
+ (struct CGSize { double x0; double x1; })smallPillSize;
+ (id)expandedFont;

- (id)setupInContainerView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)regionIdentifiersForPartWithIdentifier:(id)a0;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (void)dealloc;
- (void)sizeUpdatedFromSize:(struct CGSize { double x0; double x1; })a0;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)statusBarEnabledPartsUpdated;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)a0;
- (BOOL)_updateDateAndTimePlacements;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)a0 animationType:(long long)a1;
- (double)airplaneSpeedForAnimationType:(long long)a0;
- (double)airplaneShouldFadeForAnimationType:(long long)a0;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (void)itemCreated:(id)a0;
- (id)styleAttributesForStyle:(long long)a0;
- (void)_dateTimePreferencesUpdated;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
