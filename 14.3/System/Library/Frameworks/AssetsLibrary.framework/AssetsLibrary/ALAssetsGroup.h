@interface ALAssetsGroup : NSObject

@property (retain, nonatomic) id internal;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;

- (id)valueForProperty:(id)a0;
- (void)enumerateAssetsUsingBlock:(id /* block */)a0;
- (struct CGImage { } *)posterImage;
- (void)dealloc;
- (long long)numberOfAssets;
- (BOOL)isValid;
- (id)_uuid;
- (id)description;
- (BOOL)addAsset:(id)a0;
- (id)_typeAsString;
- (void)_enumerateAssetsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithPhotoAlbum:(id)a0 library:(id)a1 type:(unsigned long long)a2;
- (void)setAssetsFilter:(id)a0;
- (void)enumerateAssetsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateAssetsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
