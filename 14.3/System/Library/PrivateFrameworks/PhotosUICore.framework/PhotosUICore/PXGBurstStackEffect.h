@interface PXGBurstStackEffect : PXGEffect

@property (nonatomic) long long numberOfItemsStackedBehind;

+ (id)createSiblingsTextureForMainSpriteTexture:(id)a0;
+ (void)configureSiblingSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; })a0 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1 siblingsTexture:(id)a2 forMainRenderSpriteRef:(struct { struct *x0; struct *x1; struct *x2; })a3 mainPresentationSpriteRef:(struct { struct *x0; struct *x1; struct *x2; })a4 mainSpriteIndex:(unsigned int)a5 mainSpriteTexture:(id)a6 effectData:(const struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; unsigned int x8; unsigned short x9; } *)a7 screenScale:(double)a8;

- (id)initWithMetadataStore:(id)a0;
- (unsigned short)type;

@end
