@class _UICollectionPreferredSizes;
@protocol _UICollectionLayoutSectionSolver;

@interface _UICollectionCompositionalSolverPreferredSizesRebaseInfo : NSObject

@property (readonly, nonatomic) id<_UICollectionLayoutSectionSolver> solution;
@property (readonly, nonatomic) _UICollectionPreferredSizes *preferredSizes;

- (void).cxx_destruct;
- (id)initWithSolution:(id)a0 preferredSizes:(id)a1;

@end
