@class NSString, NSMutableDictionary;

@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject <_UICollectionCompositionalLayoutSolverResolveResult> {
    NSMutableDictionary *_insertedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary *_deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary *_deletedDecorationElementKindIndexPathsDict;
}

@property (nonatomic) struct CGPoint { double x; double y; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { double width; double height; } contentSizeAdjustment;
@property (nonatomic) BOOL sectionsWereRequeried;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathsForDeletedSupplememtariesForElementKind:(id)a0;
- (id)indexPathsForDeletedDecorationsForElementKind:(id)a0;
- (id)indexPathsForInsertedDecorationsForElementKind:(id)a0;
- (void).cxx_destruct;
- (id)indexPathsForInsertedSupplememtariesForElementKind:(id)a0;
- (id)init;

@end
