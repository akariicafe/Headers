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
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForElementKind:(id)a0;
- (BOOL)overlapsOffsets:(id)a0;
- (id)offsetsByApplyingOffsets:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)offsetsByRebasingOnOffsets:(id)a0;
- (id)indexesForElementKind:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsIndex:(long long)a0 forElementKind:(id)a1;

@end
