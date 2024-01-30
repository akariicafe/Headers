@class NSIndexSet, NSSet, NSString, NSMutableIndexSet, NSMutableDictionary;

@interface _UICollectionLayoutSolveResult : NSObject <_UICollectionLayoutSolveResult> {
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryIndexesDict;
}

@property (nonatomic) struct CGPoint { double x; double y; } contentOffsetAdjustment;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
