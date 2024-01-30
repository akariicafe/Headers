@class NSMutableDictionary, NSMutableArray;

@interface PXStoryConcreteAutoEditClipCatalog : NSObject <PXStoryAutoEditClipCatalog, NSCopying, NSMutableCopying> {
    NSMutableDictionary *_clipIndicesByAssetUUID;
    NSMutableArray *_orderedClips;
}

@property (readonly, nonatomic) long long numberOfClips;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithCapacity:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)clipAtIndex:(long long)a0;
- (id)clipForDisplayAsset:(id)a0;
- (void)enumerateClipsUsingBlock:(id /* block */)a0;
- (long long)indexOfClipForDisplayAsset:(id)a0;

@end
