@class UIImage, CPImageSetAssetRegistration;

@interface CPImageSet : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CPImageSetAssetRegistration *currentAssetRegistration;
@property (retain, nonatomic) UIImage *lightContentImage;
@property (retain, nonatomic) UIImage *darkContentImage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)description;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 treatmentBlock:(id /* block */)a1;
- (id)initWithLightContentImage:(id)a0 darkContentImage:(id)a1;
- (void)resizeImagesToSize:(struct CGSize { double x0; double x1; })a0;
- (void)swapStyles;

@end
