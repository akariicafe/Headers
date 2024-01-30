@class UIImage, PVImageBuffer;

@interface JTImage : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) PVImageBuffer *pvImageBuffer;

+ (id)jtImageWithUIImage:(id)a0;

- (void).cxx_destruct;
- (id)bluredImageWithFlippedXAxis:(BOOL)a0;
- (id)initWithPVImage:(id)a0;
- (id)initWithUIImage:(id)a0;
- (BOOL)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;

@end
