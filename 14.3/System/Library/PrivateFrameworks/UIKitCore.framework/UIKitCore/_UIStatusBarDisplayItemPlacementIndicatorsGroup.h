@class _UIStatusBarIdentifier, NSArray, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup

@property (class, readonly, nonatomic) _UIStatusBarIdentifier *activityItemDisplayIdentifier;

@property (readonly, copy, nonatomic) NSArray *stablePlacements;
@property (readonly, copy, nonatomic) NSArray *unstablePlacements;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacement *bluetoothInsetPaddingItem;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 bluetoothPaddingInset:(double)a2;

- (void).cxx_destruct;

@end
