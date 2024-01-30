@interface _UIFeedbackDragSnappingBehavior : _UIDragSnappingFeedbackGenerator

+ (id)dragBehaviorWithCoordinateSpace:(id)a0 configuration:(id)a1;
+ (id)retargetBehaviorWithStyle:(long long)a0 coordinateSpace:(id)a1;
+ (id)dragBehaviorWithStyle:(long long)a0 coordinateSpace:(id)a1;

- (void)targetUpdated;
- (void)snappedToFinalPosition;

@end
