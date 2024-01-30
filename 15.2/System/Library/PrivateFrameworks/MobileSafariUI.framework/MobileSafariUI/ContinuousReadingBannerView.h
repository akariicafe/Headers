@class UIView, NSString, UIImage, ContinuousReadingItem, UIImageView, SFBannerTheme, UILabel, UIColor;

@interface ContinuousReadingBannerView : UIView {
    UIView *_topHairline;
    UIView *_bottomHairline;
}

@property (class, readonly, nonatomic) UIColor *hairlineColor;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleRect;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } topHairlineInsets;
@property (retain, nonatomic) SFBannerTheme *theme;

+ (id)makeHairlineSeparator;

- (void)layoutSubviews;
- (void)_updateLabels;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_topHairline;
- (id)_bottomHairline;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateImage;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })_scaledImageSize;
- (double)_textBaseline;
- (id)initWithContinuousReadingItem:(id)a0;

@end
