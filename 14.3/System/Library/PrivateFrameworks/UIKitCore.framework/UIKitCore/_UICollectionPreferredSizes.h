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

- (id)init;
- (id)objectAtIndexedSubscript:(long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsSupplementaryOffsets:(id)a0;
- (id)initWithSizes:(id)a0 indexes:(id)a1 supplementarySizesDict:(id)a2 frameOffset:(long long)a3 supplementaryBaseOffsets:(id)a4;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)hasSizes;
- (void)addPreferredSize:(id)a0 forSupplementaryWithElementKind:(id)a1 atIndex:(long long)a2;
- (void)setObject:(id)a0 atIndexedSubscript:(long long)a1;
- (id)preferredSizesApplyingFrameOffset:(long long)a0 supplementaryBaseOffsets:(id)a1;

@end
