@class UIImage, CPImageSetAssetRegistration;

@interface CPImageSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPImageSetAssetRegistration *currentAssetRegistration;
@property (retain, nonatomic) UIImage *lightContentImage;
@property (retain, nonatomic) UIImage *darkContentImage;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImage:(id)a0 treatmentBlock:(id /* block */)a1;
- (id)initWithLightContentImage:(id)a0 darkContentImage:(id)a1;
- (void)swapStyles;
- (void)resizeImagesToSize:(struct CGSize { double x0; double x1; })a0;

@end
