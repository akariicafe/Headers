@protocol MTLDevice;

@interface FigMetalUtils : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;

- (id)initWithDevice:(id)a0;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)computeLinearTextureStride:(unsigned long long)a0 format:(unsigned long long)a1;
- (id)texture2DFromBuffer:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 format:(unsigned long long)a3 offset:(unsigned long long)a4 usage:(unsigned long long)a5;

@end
