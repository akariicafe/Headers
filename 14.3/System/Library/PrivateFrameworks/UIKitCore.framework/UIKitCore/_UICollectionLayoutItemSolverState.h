@class NSArray, _UIRTree, NSDictionary;
@protocol _UICollectionLayoutAuxillaryOffsets;

@interface _UICollectionLayoutItemSolverState : NSObject

@property (readonly, nonatomic) NSArray *solutionFrames;
@property (readonly, nonatomic) _UIRTree *geometricIndexer;
@property (readonly, nonatomic) long long itemFrameCount;
@property (readonly, nonatomic) long long supplementaryFrameCount;
@property (readonly, nonatomic) NSArray *availableLayoutSpaces;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } solvedFittingFrame;
@property (readonly, nonatomic) NSArray *itemFrames;
@property (readonly, nonatomic) NSArray *auxillaryFrames;
@property (readonly, nonatomic) NSDictionary *supplementaryDictByKindIndex;
@property (readonly, nonatomic) id<_UICollectionLayoutAuxillaryOffsets> supplementaryFrameOffsets;

- (id)initWithSolutionFrames:(id)a0 itemFrameCount:(long long)a1 supplementaryFrameCount:(long long)a2 availableLayoutSpaces:(id)a3 solvedFittingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void).cxx_destruct;
- (void)_generateGeometricIndexer;
- (void)_generateMemoizedSolutionFramesBasedData;

@end
