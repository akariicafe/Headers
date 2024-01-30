@class NSLayoutAnchor, NSString, UIImageView, UIImage, UILabel, NSLayoutConstraint;

@interface PRComplicationGalleryApplicationTitleView : UIView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentBottomConstraint;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) NSLayoutAnchor *titleLabelLeadingAnchor;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;

+ (struct CGSize { double x0; double x1; })iconImageSize;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_textLabelFont;
- (unsigned long long)_textLabelNumberOfLines;

@end
