@class PKImage, NSData;

@interface PKPassFrontFaceImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *faceImage;
@property (retain, nonatomic) PKImage *faceShadowImage;
@property (retain, nonatomic) PKImage *footerImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } logoRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cobrandLogoRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } thumbnailRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } stripRect;
@property (retain, nonatomic) PKImage *dynamicLayerStaticFallbackImage;
@property (retain, nonatomic) PKImage *backgroundParallaxEmitterImage;
@property (retain, nonatomic) PKImage *backgroundParallaxImage;
@property (retain, nonatomic) PKImage *backgroundParallaxCrossDissolveImage;
@property (retain, nonatomic) PKImage *neutralEmitterImage;
@property (retain, nonatomic) PKImage *neutralImage;
@property (retain, nonatomic) PKImage *foregroundParallaxEmitterImage;
@property (retain, nonatomic) PKImage *foregroundParallaxImage;
@property (retain, nonatomic) PKImage *foregroundParallaxCrossDissolveImage;
@property (retain, nonatomic) PKImage *staticOverlayEmitterImage;
@property (retain, nonatomic) PKImage *staticOverlayImage;
@property (retain, nonatomic) PKImage *transactionEffectEmitterImage;
@property (retain, nonatomic) NSData *transactionEffectEmitterShapeSVGData;

+ (BOOL)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (id)archiveName;
+ (long long)imageSetType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDisplayProfile:(id)a0 fileURL:(id)a1 screenScale:(double)a2 suffix:(id)a3;
- (void)preheatImages;

@end
