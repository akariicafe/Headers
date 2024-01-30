@protocol MTLTexture;

@interface Texture2DWrapper : NSObject

@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) id<MTLTexture> textureArray;

- (void).cxx_destruct;
- (unsigned long long)textureFormatOfPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithTexture:(id)a0 textureArray:(BOOL)a1;
- (id)initWithFigMetalContext:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 usage:(unsigned long long)a2 textureArray:(BOOL)a3;
- (id)initNewTextureWithFigMetalContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1 withFormat:(unsigned long long)a2 usage:(unsigned long long)a3 textureArray:(BOOL)a4;
- (id)initWithFigMetalContext:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 usage:(unsigned long long)a2;
- (id)initNewTextureWithFigMetalContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1 withFormat:(unsigned long long)a2 usage:(unsigned long long)a3;
- (id)initWithFigMetalContext:(id)a0 copyingPixelBuffer:(struct __CVBuffer { } *)a1 usage:(unsigned long long)a2;

@end
