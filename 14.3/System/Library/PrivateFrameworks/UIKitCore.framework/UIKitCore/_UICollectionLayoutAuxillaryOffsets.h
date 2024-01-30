@class NSSet, NSString, NSMutableDictionary;

@interface _UICollectionLayoutAuxillaryOffsets : NSObject <_UICollectionLayoutAuxillaryOffsets, NSCopying> {
    NSMutableDictionary *_offsets;
}

@property (readonly, nonatomic) NSSet *elementKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)offsetForElementKind:(id)a0;
- (void)incrementCountsFromOffsets:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOffsets:(id)a0;
- (void)_offsetWithOffsets:(id)a0 applyingBase:(BOOL)a1;
- (id)indexesForElementKind:(id)a0;
- (void)addIndexes:(id)a0 forElementKind:(id)a1;
- (void)incrementCountForElementKind:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForElementKind:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)offsetsByApplyingOffsets:(id)a0;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forElementKind:(id)a1;
- (BOOL)overlapsOffsets:(id)a0;
- (id)offsetsByRebasingOnOffsets:(id)a0;
- (BOOL)containsIndex:(long long)a0 forElementKind:(id)a1;
- (void)setIndexes:(id)a0 forElementKind:(id)a1;

@end
