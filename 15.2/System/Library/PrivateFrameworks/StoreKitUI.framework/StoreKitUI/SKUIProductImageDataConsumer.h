@class UIColor, SKUIColorScheme;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } iconSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

+ (id)smartBannerConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposeConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemePosterConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemeConsumer;
+ (id)lockupConsumerWithSize:(long long)a0 itemKind:(long long)a1;
+ (id)consumerWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)gridConsumer;
+ (id)wishlistConsumer;
+ (id)cardConsumer;
+ (id)chartsConsumer;
+ (id)updatesConsumer;
+ (id)purchasedConsumer;
+ (id)productPageConsumer;
+ (id)swooshConsumer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageForImage:(id)a0;
- (id)imageForColor:(id)a0;
- (id)imageForColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
