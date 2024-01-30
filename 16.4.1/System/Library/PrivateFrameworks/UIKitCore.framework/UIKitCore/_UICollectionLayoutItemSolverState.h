@class NSArray, NSDictionary, _UIRTree, NSString;
@protocol _UICollectionLayoutAuxillaryOffsets;

@interface _UICollectionLayoutItemSolverState : NSObject {
    NSArray *_itemFrames;
    NSArray *_auxillaryFrames;
    NSDictionary *_supplementaryDictByKindIndex;
    id<_UICollectionLayoutAuxillaryOffsets> _supplementaryFrameOffsets;
    _UIRTree *_geometricIndexer;
    NSArray *_solutionFrames;
    long long _itemFrameCount;
    long long _supplementaryFrameCount;
    NSArray *_availableLayoutSpaces;
    NSString *_errorDescription;
    struct CGPoint { double x; double y; } _additionalOffsetForOutermostGroup;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _solvedFittingFrame;
}

- (void).cxx_destruct;

@end
