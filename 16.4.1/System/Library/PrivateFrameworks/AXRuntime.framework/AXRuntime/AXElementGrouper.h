@class NSArray;

@interface AXElementGrouper : NSObject

@property (nonatomic) long long heuristics;
@property (readonly, nonatomic) unsigned long long minimumGroupSize;
@property (readonly, nonatomic) unsigned long long maximumGroupSize;
@property (readonly, nonatomic) unsigned long long preferredGroupSize;
@property (readonly, nonatomic) double thresholdForDeterminingEqualSize;
@property (readonly, nonatomic) NSArray *transformationPasses;

- (id)init;
- (id)initWithHeuristics:(long long)a0;
- (id)_applyTransformationPass:(id)a0 toGroup:(id)a1;
- (id)_applyTransformationPassesToRootGroup:(id)a0;
- (id)_buildHierarchyForGroup:(id)a0 indexOfKeyboard:(unsigned long long *)a1;
- (id)_flattenHierarchyForGroup:(id)a0 rootLevel:(BOOL)a1;
- (BOOL)_frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isApproximatelySameSizeAsFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_groupRemovingImpossibleGroups:(id)a0 isRootLevel:(BOOL)a1;
- (id)_groupablesForItems:(id)a0;
- (id)groupElementsInRootGroup:(id)a0;

@end
