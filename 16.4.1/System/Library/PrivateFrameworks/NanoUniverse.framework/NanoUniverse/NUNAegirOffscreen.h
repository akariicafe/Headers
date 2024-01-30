@class MTLRenderPassDescriptor;
@protocol MTLTexture;

@interface NUNAegirOffscreen : NSObject

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) id<MTLTexture> texture0;
@property (retain, nonatomic) id<MTLTexture> texture1;
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 width:(int)a1 height:(int)a2 pixelFormat0:(unsigned long long)a3 pixelFormat1:(unsigned long long)a4 mipmaps:(int)a5 loadAction:(unsigned long long)a6 clearColor0:(struct { double x0; double x1; double x2; double x3; })a7 clearColor1:(struct { double x0; double x1; double x2; double x3; })a8;
- (id)initWithDevice:(id)a0 width:(int)a1 height:(int)a2 texture0:(id)a3 texture1:(id)a4 loadAction:(unsigned long long)a5 clearColor0:(struct { double x0; double x1; double x2; double x3; })a6 clearColor1:(struct { double x0; double x1; double x2; double x3; })a7;

@end
