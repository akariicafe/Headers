@class _UIStatusBarDisplayItemPlacement, NSString, NSDictionary, NSLayoutConstraint, _UIStatusBar;

@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS <_UIStatusBarRegionCursorInsetProvider>

@property (class, readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } regionCursorInsets;
@property (class, readonly, nonatomic) BOOL regionCursorIsPill;
@property (class, readonly, nonatomic) double regionCursorCornerRadius;

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } expandedEdgeInsets;
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

+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;
+ (double)height;
+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

- (void)itemCreated:(id)a0;
- (id)expandedFont;
- (double)airplaneSpeedForAnimationType:(long long)a0;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)pillSmallFont;
- (id)styleAttributesForStyle:(long long)a0;
- (id)normalFont;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)a0;
- (id)pillFont;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeUpdatedFromSize:(struct CGSize { double x0; double x1; })a0;
- (void)statusBarEnabledPartsUpdated;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)setupInContainerView:(id)a0;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)a0 animationType:(long long)a1;
- (struct CGSize { double x0; double x1; })pillSize;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (BOOL)_updateDateAndTimePlacements;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)regionIdentifiersForPartWithIdentifier:(id)a0;
- (double)airplaneShouldFadeForAnimationType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (double)regionSpacing;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_dateTimePreferencesUpdated;

@end
