@class UIImage, PVImageBuffer;

@interface JTImage : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) PVImageBuffer *pvImageBuffer;

+ (id)jtImageWithUIImage:(id)a0;

- (void).cxx_destruct;
- (id)initWithUIImage:(id)a0;
- (id)bluredImageWithFlippedXAxis:(BOOL)a0;
- (BOOL)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;
- (id)initWithPVImage:(id)a0;

@end
