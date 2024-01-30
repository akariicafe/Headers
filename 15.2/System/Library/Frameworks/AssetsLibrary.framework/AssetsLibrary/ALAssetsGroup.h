@interface ALAssetsGroup : NSObject

@property (retain, nonatomic) id internal;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;

- (id)_uuid;
- (struct CGImage { } *)posterImage;
- (id)description;
- (id)valueForProperty:(id)a0;
- (long long)numberOfAssets;
- (void)enumerateAssetsUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)addAsset:(id)a0;
- (BOOL)isValid;
- (id)_typeAsString;
- (id)initWithPhotoAlbum:(id)a0 library:(id)a1 type:(unsigned long long)a2;
- (void)setAssetsFilter:(id)a0;
- (void)_enumerateAssetsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateAssetsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateAssetsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
