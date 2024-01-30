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

+ (id)mixedTopChartsNewsstandConsumer;
+ (id)giftComposeProductImageConsumer;
+ (id)productPageProductImageConsumer;
+ (id)appIconConsumerWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)applePackIconConsumer;
+ (id)brickConsumer;
+ (id)brickConsumerWithBrickSize:(struct CGSize { double x0; double x1; })a0;
+ (id)cardIconConsumer;
+ (id)cardProductImageConsumer;
+ (id)categoriesMessagesConsumer;
+ (id)categoryIconConsumer;
+ (id)giftResultIconConsumer;
+ (id)giftResultProductImageConsumer;
+ (id)giftThemeIconConsumer;
+ (id)giftThemeProductImageConsumer;
+ (id)gridIconConsumer;
+ (BOOL)isImageCompressionEnabled;
+ (id)listIconConsumer;
+ (id)lockupIconConsumerWithSize:(long long)a0;
+ (id)lockupProductImageConsumerWithSize:(long long)a0;
+ (id)manageMessagesConsumer;
+ (id)newsstandRoomNewsstandConsumer;
+ (id)newsstandSwooshNewsstandConsumer;
+ (id)parentBundleIconConsumer;
+ (id)productImageConsumerWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)purchasedIconConsumer;
+ (id)purchasedMessagesConsumer;
+ (id)purchasedProductImageConsumer;
+ (id)roomIconConsumer;
+ (id)roomProductImageConsumer;
+ (id)safariBannerIconConsumer;
+ (id)safariBannerProductImageConsumer;
+ (id)shareSheetIconConsumer;
+ (id)swooshNewsstandConsumer;
+ (id)topChartsIconConsumer;
+ (id)topChartsNewsstandConsumer;
+ (id)updatesIconConsumer;
+ (id)updatesProductImageConsumer;
+ (id)wishlistIconConsumer;
+ (id)wishlistProductImageConsumer;

- (id)init;
- (void).cxx_destruct;
- (id)_arcRoundedImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadius:(double)a2 drawBlock:(id /* block */)a3;
- (BOOL)_backgroundIsOpaque;
- (id)_defaultPlaceholderColor;
- (void)_drawBordersWithImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_dynamicUberImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 drawBlock:(id /* block */)a2;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 isOpaque:(BOOL)a1 drawBlock:(id /* block */)a2;
- (id)_leftToRightGradient:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_outputImageWithInputSize:(struct CGSize { double x0; double x1; })a0 outputSize:(struct CGSize { double x0; double x1; })a1 drawBlock:(id /* block */)a2;
- (id /* block */)_placeholderCornerPathBlock;
- (id)_radialBlurImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_roundedBorderWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_scaledImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)_uberBannerImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 drawBlock:(id /* block */)a2;
- (id)_uberImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputSize:(struct CGSize { double x0; double x1; })a1 backgroundColor:(id)a2 drawBlock:(id /* block */)a3;
- (id)imageForColor:(id)a0;
- (id)imageForColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)imageForImage:(id)a0;
- (id)imagePlaceholderForColor:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 treatment:(long long)a1;
- (id)initWithViewElement:(id)a0;
- (BOOL)isImagePlaceholderAvailable;

@end
