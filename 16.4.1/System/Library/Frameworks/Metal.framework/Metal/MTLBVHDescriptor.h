@class NSArray;

@interface MTLBVHDescriptor : NSObject

@property (nonatomic) unsigned long long maxDepth;
@property (nonatomic) unsigned long long branchingFactor;
@property (nonatomic) unsigned long long minPrimitivesPerLeaf;
@property (nonatomic) unsigned long long maxPrimitivesPerLeaf;
@property (nonatomic) unsigned long long minPrimitivesPerInnerNode;
@property (nonatomic) unsigned long long maxPrimitivesPerInnerNode;
@property (nonatomic) float traversalCost;
@property (nonatomic) float primitiveCost;
@property (nonatomic) unsigned long long splitHeuristic;
@property (nonatomic) float splitCapacity;
@property (nonatomic) float minOverlap;
@property (nonatomic) float motionTraversalCost;
@property (nonatomic) BOOL motion;
@property (nonatomic) unsigned long long primitiveKeyframeCount;
@property (nonatomic) float primitiveMotionStartTime;
@property (nonatomic) float primitiveMotionEndTime;
@property (retain, nonatomic) NSArray *geometryDescriptors;

- (void)dealloc;
- (id)init;
- (BOOL)primitiveMotion;

@end
