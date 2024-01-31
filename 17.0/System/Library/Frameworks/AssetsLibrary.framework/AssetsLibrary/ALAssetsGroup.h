@interface ALAssetsGroup : NSObject

@property (retain, nonatomic) id internal;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;

- (void)dealloc;
- (id)_uuid;
- (struct CGImage { } *)posterImage;
- (id)description;
- (id)valueForProperty:(id)a0;
- (BOOL)isValid;
- (long long)numberOfAssets;
- (BOOL)addAsset:(id)a0;
- (void)enumerateAssetsUsingBlock:(id /* block */)a0;
- (void)_enumerateAssetsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)_typeAsString;
- (void)enumerateAssetsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateAssetsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithPhotoAlbum:(id)a0 library:(id)a1 type:(unsigned long long)a2;
- (void)setAssetsFilter:(id)a0;

@end
