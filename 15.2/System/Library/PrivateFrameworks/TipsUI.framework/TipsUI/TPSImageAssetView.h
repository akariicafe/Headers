@class UIColor, TPSURLSessionItem, UIImageView, UIImage, NSString, UIView;
@protocol TPSImageAssetViewDelegate;

@interface TPSImageAssetView : UIView {
    UIView *_highlightView;
}

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) TPSURLSessionItem *imageURLSessionItem;
@property (nonatomic) BOOL respectLoadingStatus;
@property (nonatomic) BOOL hideImageWhenNil;
@property (nonatomic) BOOL roundedCorner;
@property (nonatomic) BOOL aspectFillAsset;
@property (nonatomic) double roundedCornerRadius;
@property (weak, nonatomic) id<TPSImageAssetViewDelegate> delegate;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIColor *defaultBackgroundColor;
@property (retain, nonatomic) UIColor *noImageBackgroundColor;
@property (retain, nonatomic) UIColor *overlayColor;
@property (retain, nonatomic) NSString *currentImagePath;
@property (retain, nonatomic) NSString *currentDisplayIdentifier;

+ (id)defaultBackgroundColor;
+ (BOOL)cacheImageAvailableForIdentifier:(id)a0;

- (void)updateBackgroundColor;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)image;
- (void)setImage:(id)a0;
- (void)cancel;
- (void)fetchImageWithIdentifier:(id)a0 path:(id)a1;
- (void)animateImageView:(BOOL)a0;
- (id)initWithDefaultBackgroundColor:(id)a0 noImageBackgroundColor:(id)a1;
- (void)showHighlight:(BOOL)a0;

@end
