@class NSString, _UIStatusBarRegionAxisStackingLayout, NSDictionary, _UIStatusBarRegionAxisCenteringLayout, _UIStatusBarDisplayItemPlacementGroup, NSLayoutConstraint, _UIStatusBarCellularItem;

@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider>

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup;
@property (retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint;
@property (retain, nonatomic) _UIStatusBarCellularItem *condensedCellularItem;
@property (retain, nonatomic) NSLayoutConstraint *leadingTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingHeightConstraint;
@property (retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *leadingHorizontalLayout;
@property (retain, nonatomic) NSLayoutConstraint *centerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *centerHeightConstraint;
@property (retain, nonatomic) _UIStatusBarRegionAxisCenteringLayout *centerHorizontalLayout;
@property (retain, nonatomic) NSLayoutConstraint *trailingTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingHeightConstraint;
@property (retain, nonatomic) _UIStatusBarRegionAxisStackingLayout *trailingHorizontalLayout;
@property (retain, nonatomic) NSLayoutConstraint *expandedLeadingBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (double)_heightExpanded:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })intrinsicLockScreenContentSizeForOrientation:(long long)a0;

- (void)statusBarRegionsUpdated;
- (void)itemCreated:(id)a0;
- (id)expandedFont;
- (double)lowerExpandedBaselineOffset;
- (void)dataUpdated:(id)a0;
- (void)_updateExpandedTrailingRegion;
- (void)updateDataForService:(id)a0;
- (void)orientationUpdatedFromOrientation:(long long)a0;
- (struct CGSize { double x0; double x1; })smallPillSize;
- (id)styleAttributesForStyle:(long long)a0;
- (id)normalFont;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)stringForCellularType:(long long)a0 condensed:(BOOL)a1;
- (id)pillFont;
- (id)willUpdateWithData:(id)a0;
- (id)condensedFontForCellularType:(long long)a0 defaultFont:(id)a1 baselineOffset:(double *)a2;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)setupInContainerView:(id)a0;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (struct CGSize { double x0; double x1; })pillSize;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)a0;
- (id)regionIdentifiersForPartWithIdentifier:(id)a0;
- (void)_updateLowerRegionsWithData:(id)a0;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (void)setExpanded:(BOOL)a0;
- (double)expandedBaselineOffset;
- (double)baselineOffset;
- (id)_animationForSingleLineDualCarrier;
- (id)timeFont;
- (void).cxx_destruct;
- (double)regionSpacing;
- (void)_updateLockScreenSizing;
- (BOOL)wantsExpandedLeadingPlacements;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (double)dualLineExpandedBaselineOffset;
- (double)effectiveHeight;
- (void)setOnLockScreen:(BOOL)a0;
- (id)_backgroundActivityDetailRemovalAnimation;
- (void)_updateBackgroundHeight;

@end
