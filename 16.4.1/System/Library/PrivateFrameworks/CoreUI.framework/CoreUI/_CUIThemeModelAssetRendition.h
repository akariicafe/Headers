@class NSArray, NSMutableArray, MDLAsset;

@interface _CUIThemeModelAssetRendition : CUIThemeRendition {
    MDLAsset *_asset;
    NSMutableArray *_meshKeys;
}

@property (readonly) NSArray *meshKeys;

- (void)dealloc;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1;
- (id)initForArchiving:(id)a0 withMeshRenditionKeys:(id)a1;
- (id)modelAsset;
- (unsigned long long)writeToData:(id)a0;

@end
