@class UIImage;

@interface AVTStickerImageProp : AVTStickerProp

@property (readonly, nonatomic) UIImage *image;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)buildNodeForAvatar:(id)a0 withCamera:(id)a1 options:(id)a2 forExport:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)dictionaryWithTargetPath:(id)a0;
- (id)initWithImage:(id)a0 size:(SEL)a1 scale:(id)a2 position:(struct CGSize { double x0; double x1; })a3 renderLast:(BOOL)a4 orientToCamera:(BOOL)a5 rotation:(id)a6 palettesDescriptions:(id)a7 modifiers:(id)a8 adjustments:(void /* unknown type, empty encoding */)a9;

@end
