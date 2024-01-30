@class NSIndexSet, NSSet, NSString, NSMutableDictionary, NSMutableIndexSet;
@protocol _UICollectionLayoutAuxillaryOffsets;

@interface _UICollectionPreferredSizes : NSObject <_UICollectionPreferredSizes, NSCopying> {
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
}

@property (nonatomic) long long frameOffset;
@property (retain, nonatomic) id<_UICollectionLayoutAuxillaryOffsets> supplementaryBaseOffsets;
@property (readonly, nonatomic) NSIndexSet *indexes;
@property (readonly, nonatomic) NSSet *elementKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 atIndexedSubscript:(long long)a1;
- (id)objectAtIndexedSubscript:(long long)a0;
- (void)addPreferredSize:(id)a0 forSupplementaryWithElementKind:(id)a1 atIndex:(long long)a2;
- (BOOL)hasSizes;
- (id)preferredSizesApplyingFrameOffset:(long long)a0 supplementaryBaseOffsets:(id)a1;
- (id)initWithSizes:(id)a0 indexes:(id)a1 supplementarySizesDict:(id)a2 frameOffset:(long long)a3 supplementaryBaseOffsets:(id)a4;
- (BOOL)containsSupplementaryOffsets:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
