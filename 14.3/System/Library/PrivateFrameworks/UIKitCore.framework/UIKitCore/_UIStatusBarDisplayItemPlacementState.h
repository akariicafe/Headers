@class _UIStatusBarDisplayItemPlacement, NSMutableArray, _UIStatusBarRegion;

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized>

@property (retain, nonatomic) NSMutableArray *relations;
@property (readonly, nonatomic) _UIStatusBarDisplayItemPlacement *placement;
@property (readonly, weak, nonatomic) _UIStatusBarRegion *region;
@property (readonly, nonatomic, getter=areRelationsFulfilled) BOOL relationsFulfilled;
@property (readonly, nonatomic) BOOL canBeEnabled;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) long long priority;

+ (id)stateForDisplayItemPlacement:(id)a0 region:(id)a1;

- (void).cxx_destruct;
- (id)description;

@end
