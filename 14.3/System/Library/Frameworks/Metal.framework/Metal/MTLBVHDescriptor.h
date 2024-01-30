@class NSArray;

@interface MTLBVHDescriptor : NSObject

@property (nonatomic) unsigned long long maxDepth;
@property (nonatomic) unsigned long long branchingFactor;
@property (nonatomic) unsigned long long minPrimitivesPerLeaf;
@property (nonatomic) unsigned long long maxPrimitivesPerLeaf;
@property (nonatomic) float traversalCost;
@property (nonatomic) float primitiveCost;
@property (nonatomic) unsigned long long splitHeuristic;
@property (nonatomic) float splitCapacity;
@property (nonatomic) float minOverlap;
@property (retain, nonatomic) NSArray *geometryDescriptors;

- (id)init;
- (void)dealloc;

@end
