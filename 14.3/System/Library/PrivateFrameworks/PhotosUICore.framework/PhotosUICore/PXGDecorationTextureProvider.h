@class NSDateComponentsFormatter;
@protocol PXGViewSource;

@interface PXGDecorationTextureProvider : PXGCGImageTextureProvider

@property (readonly, nonatomic) NSDateComponentsFormatter *videoDurationFormatter;
@property (weak, nonatomic) id<PXGViewSource> overlayViewSource;

- (id)init;
- (void).cxx_destruct;
- (void)_requestTextureForDecorationInfo:(struct PXGDecorationSpriteInfo { long long x0; double x1; })a0 debugDecoration:(id)a1 targetSize:(struct CGSize { double x0; double x1; })a2 cornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a3 screenScale:(double)a4 requestID:(int)a5 viewEnvironment:(id)a6 userInterfaceDirection:(unsigned long long)a7;
- (void)_requestViewTextureForDecorationInfo:(struct PXGDecorationSpriteInfo { long long x0; double x1; })a0 customViewClass:(Class)a1 userData:(id)a2 decorationOptions:(unsigned long long)a3 requestID:(int)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; float x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; unsigned short x3; unsigned short x4; unsigned char x5; } *)a2 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;

@end
