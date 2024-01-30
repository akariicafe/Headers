@class UIImage, UIImageView;

@interface PKWatchHeroCardExplainationHeaderView : UIView {
    BOOL _isCompactWatch;
    UIImageView *_watchDeviceImageView;
    UIImageView *_watchWallpaperImageView;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } recommendedCardImageSize;

@property (retain, nonatomic) UIImage *cardImage;
@property (readonly, nonatomic) UIImageView *cardImageView;
@property (nonatomic) BOOL useCompactLayout;

+ (struct CGSize { double x0; double x1; })watchDeviceImageSize;
+ (BOOL)isCompactWatch;
+ (struct CGSize { double x0; double x1; })wallpaperImageSize:(BOOL)a0;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)watchDeviceImage;
- (id)bridgeWallpaperImage;
- (id)bridgeHeroImage;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
