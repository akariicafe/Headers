@class UIImage, UITraitCollection;

@interface CPImageSetAssetRegistration : NSObject

@property (readonly, nonatomic) UITraitCollection *baseTraitCollection;
@property (readonly, nonatomic) UITraitCollection *lightTraitCollection;
@property (readonly, nonatomic) UITraitCollection *darkTraitCollection;
@property (readonly, nonatomic) UIImage *combinedImage;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLightImage:(id)a0 darkImage:(id)a1 baseTraitCollection:(id)a2;

@end
