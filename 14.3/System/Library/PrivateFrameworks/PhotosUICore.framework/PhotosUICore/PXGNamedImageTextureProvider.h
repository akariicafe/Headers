@class NSBundle;

@interface PXGNamedImageTextureProvider : PXGCGImageTextureProvider

@property (retain, nonatomic) NSBundle *bundle;

- (void).cxx_destruct;
- (void)_requestTextureForImageWithName:(id)a0 inBundle:(id)a1 isSystemImage:(BOOL)a2 tintColor:(id)a3 imageConfiguration:(id)a4 userInterfaceDirection:(unsigned long long)a5 screenScale:(double)a6 requestID:(int)a7;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;

@end
