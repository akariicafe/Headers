@interface PXGBurstStackEffect : PXGEffect

@property (nonatomic) long long numberOfItemsStackedBehind;

- (id)createSiblingsTextureForMainSpriteTexture:(id)a0;
- (void)configureSiblingSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a0 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1 siblingsTexture:(id)a2 forMainRenderSpriteRef:(struct { struct *x0; struct *x1; struct *x2; struct *x3; })a3 mainPresentationSpriteRef:(struct { struct *x0; struct *x1; struct *x2; struct *x3; })a4 mainSpriteIndex:(unsigned int)a5 mainSpriteTexture:(id)a6 screenScale:(double)a7;
- (id)initWithEntityManager:(id)a0;
- (id)shader;

@end
