@class _UIStatusBar, NSArray, NSString, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarDisplayItemPlacementNetworkGroup, _UIStatusBarAnimation;

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider>

@property (class, readonly) BOOL hasCellularCapability;
@property (class, readonly) BOOL wantsExpandedLeadingPlacements;
@property (class, readonly) double height;
@property (class, readonly) double cornerRadius;
@property (class, readonly) double itemSpacing;
@property (class, readonly) double expandedItemSpacing;
@property (class, readonly) double regionSpacing;
@property (class, readonly) double bluetoothPaddingInset;

@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *secondaryWifiGroup;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL onLockScreen;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacementNetworkGroup *expandedNetworkGroup;
@property (readonly, nonatomic) NSArray *expandedCellularPlacementsAffectedByAirplaneMode;
@property (readonly, nonatomic) NSArray *expandedLeadingPlacements;
@property (readonly, nonatomic) NSArray *expandedTrailingPlacements;
@property (readonly, nonatomic) _UIStatusBarAnimation *animationForAirplaneMode;
@property (readonly, nonatomic) double airplaneObstacleFadeOutDuration;
@property (readonly, nonatomic) double airplaneObstacleFadeInDuration;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (readonly, nonatomic) BOOL supportsIndirectPointerTouchActions;
@property (readonly, nonatomic) BOOL canFixupDisplayItemAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })intrinsicContentSizeForOrientation:(long long)a0;
+ (Class)visualProviderSubclassForScreen:(id)a0 visualProviderInfo:(id)a1;

- (id)setupInContainerView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)a0;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (void)modeUpdatedFromMode:(long long)a0;
- (id)willUpdateWithData:(id)a0;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)a0;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)a0 animationType:(long long)a1;
- (double)airplaneSpeedForAnimationType:(long long)a0;
- (double)airplaneShouldFadeForAnimationType:(long long)a0;
- (void)updateDataForSystemNavigation:(id)a0;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)a0;
- (void)_createExpandedPlacements;
- (void)_applyToAppearingRegions:(BOOL)a0 block:(id /* block */)a1;
- (void)actionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0 itemAnimation:(id)a1;
- (id)styleAttributesForStyle:(long long)a0;
- (void)updateDataForService:(id)a0;

@end
