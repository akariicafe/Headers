@class NSCollectionLayoutItem, _UICollectionLayoutItemSolver;

@interface _UICollectionSolutionGroupArrangementItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (readonly, nonatomic) _UICollectionLayoutItemSolver *solution;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;

- (void).cxx_destruct;
- (id)initWithSolution:(id)a0;

@end
