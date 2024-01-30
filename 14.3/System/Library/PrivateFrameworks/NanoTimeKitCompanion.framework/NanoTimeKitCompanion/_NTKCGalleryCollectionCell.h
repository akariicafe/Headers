@class UIView, NSString, UIImage, UIImageView, UIFontMetrics, NSLayoutConstraint, NTKCFaceContainerView, UILabel;

@interface _NTKCGalleryCollectionCell : UICollectionViewCell {
    UILabel *_nameLabel;
    UIImageView *_nameImageView;
    NSLayoutConstraint *_nameBaselineConstraint;
    NSLayoutConstraint *_leadingImageConstraint;
    NSLayoutConstraint *_trailingImageConstraint;
    NSLayoutConstraint *_centerConstraint;
}

@property (retain, nonatomic) UIView *faceView;
@property (retain, nonatomic) NTKCFaceContainerView *faceContainerView;
@property (copy, nonatomic) NSString *calloutName;
@property (retain, nonatomic) UIImage *calloutImage;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) UIFontMetrics *fontMetrics;

+ (id)reuseIdentifier;
+ (struct CGSize { double x0; double x1; })itemSizeWithCalloutName:(BOOL)a0 andCalloutImage:(BOOL)a1;
+ (id)nonLuxoReuseIdentifier;
+ (id)luxoReuseIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)_highlight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)_fontSizeDidChange;
- (void)setFontAdjustingAttributes;

@end
