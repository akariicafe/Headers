@class NSByteCountFormatter, NSDateComponentsFormatter;
@protocol PXGViewSource;

@interface PXGDecorationTextureProvider : PXGCGImageTextureProvider

@property (readonly, nonatomic) NSDateComponentsFormatter *videoDurationFormatter;
@property (readonly, nonatomic) NSByteCountFormatter *byteCountFormattter;
@property (weak, nonatomic) id<PXGViewSource> overlayViewSource;

+ (void)_drawWithDecorationInfo:(struct PXGDecorationSpriteInfo { long long x0; long long x1; double x2; long long x3; long long x4; })a0 solidColorOverlay:(id)a1 debugDecoration:(id)a2 cornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a3 context:(struct CGContext { } *)a4 viewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 screenScale:(double)a6 viewEnvironment:(id)a7 userInterfaceDirection:(unsigned long long)a8 videoDurationFormatter:(id)a9 byteCountFormatter:(id)a10;

- (void)_requestViewTextureForDecorationInfo:(struct PXGDecorationSpriteInfo { long long x0; long long x1; double x2; long long x3; long long x4; })a0 customViewClass:(Class)a1 userData:(id)a2 decorationOptions:(unsigned long long)a3 requestID:(int)a4;
- (void)_requestTextureForDecorationInfo:(struct PXGDecorationSpriteInfo { long long x0; long long x1; double x2; long long x3; long long x4; })a0 solidColorOverlay:(id)a1 debugDecoration:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3 cornerRadius:(struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; })a4 screenScale:(double)a5 requestID:(int)a6 viewEnvironment:(id)a7 userInterfaceDirection:(unsigned long long)a8;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 geometries:(struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(struct { int x0; int x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 inLayout:(id)a4;
- (void).cxx_destruct;

@end
