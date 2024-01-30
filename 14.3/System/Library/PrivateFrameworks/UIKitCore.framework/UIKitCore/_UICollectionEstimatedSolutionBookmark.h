@class _UICollectionLayoutItemSolver;
@protocol _UICollectionLayoutAuxillaryOffsets;

@interface _UICollectionEstimatedSolutionBookmark : NSObject

@property (readonly, nonatomic) _UICollectionLayoutItemSolver *solution;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } solutionFrame;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } itemRange;
@property (readonly, nonatomic) id<_UICollectionLayoutAuxillaryOffsets> supplementaryOffsets;

- (void).cxx_destruct;
- (id)initWithSolution:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 itemIndexOffset:(long long)a2 supplementaryOffsets:(id)a3 maxItemFrameCount:(long long)a4;
- (id)description;
- (id)_supplementaryOffsetsForItemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 solution:(id)a1 supplementaryOffsets:(id)a2;

@end
