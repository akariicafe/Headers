@class UIColor, IKColor, UITraitCollection;

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _borderRadii;
    IKColor *_iKBackgroundColor;
    UITraitCollection *_startingTraitCollection;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderWidths;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } borderMargins;
@property (nonatomic) long long imageContentMode;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imagePadding;
@property (nonatomic) long long imageTreatment;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;

+ (id)safariBannerIconConsumer;
+ (id)safariBannerProductImageConsumer;
+ (id)shareSheetIconConsumer;
+ (id)roomIconConsumer;
+ (id)giftComposeProductImageConsumer;
+ (id)giftResultIconConsumer;
+ (id)giftResultProductImageConsumer;
+ (id)giftThemeIconConsumer;
+ (id)giftThemeProductImageConsumer;
+ (id)lockupIconConsumerWithSize:(long long)a0;
+ (id)appIconConsumerWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)brickConsumerWithBrickSize:(struct CGSize { double x0; double x1; })a0;
+ (id)productImageConsumerWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)roomProductImageConsumer;
+ (id)applePackIconConsumer;
+ (id)brickConsumer;
+ (id)cardIconConsumer;
+ (id)cardProductImageConsumer;
+ (id)categoryIconConsumer;
+ (id)gridIconConsumer;
+ (id)listIconConsumer;
+ (id)lockupProductImageConsumerWithSize:(long long)a0;
+ (id)mixedTopChartsNewsstandConsumer;
+ (id)newsstandRoomNewsstandConsumer;
+ (id)newsstandSwooshNewsstandConsumer;
+ (id)parentBundleIconConsumer;
+ (id)productPageProductImageConsumer;
+ (id)purchasedIconConsumer;
+ (id)purchasedProductImageConsumer;
+ (id)swooshNewsstandConsumer;
+ (id)topChartsIconConsumer;
+ (id)topChartsNewsstandConsumer;
+ (id)updatesIconConsumer;
+ (id)updatesProductImageConsumer;
+ (id)wishlistIconConsumer;
+ (id)wishlistProductImageConsumer;
+ (id)manageMessagesConsumer;
+ (id)categoriesMessagesConsumer;
+ (id)purchasedMessagesConsumer;
+ (BOOL)isImageCompressionEnabled;

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewElement:(id)a0;
- (id)imageForImage:(id)a0;
- (BOOL)isImagePlaceholderAvailable;
- (id)imagePlaceholderForColor:(id)a0;
- (id)imageForColor:(id)a0;
- (id)imageForColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 treatment:(long long)a1;
- (id)_defaultPlaceholderColor;
- (id)_outputImageWithInputSize:(struct CGSize { double x0; double x1; })a0 outputSize:(struct CGSize { double x0; double x1; })a1 drawBlock:(id /* block */)a2;
- (id /* block */)_placeholderCornerPathBlock;
- (id)_arcRoundedImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadius:(double)a2 drawBlock:(id /* block */)a3;
- (id)_scaledImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_leftToRightGradient:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_radialBlurImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_dynamicUberImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 drawBlock:(id /* block */)a2;
- (id)_uberBannerImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 drawBlock:(id /* block */)a2;
- (id)_roundedBorderWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 isOpaque:(BOOL)a1 drawBlock:(id /* block */)a2;
- (BOOL)_backgroundIsOpaque;
- (void)_drawBordersWithImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_uberImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 backgroundColor:(id)a2 drawBlock:(id /* block */)a3;

@end
