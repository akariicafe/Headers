@class UIImageView, UILabel, UIView, NSLayoutConstraint;

@interface CPUIBannerViewButton : UIControl

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL wantsChevronImage;
@property (retain, nonatomic) NSLayoutConstraint *imageCenterConstraint;

+ (id)buttonWithOK;
+ (id)buttonWithChevronImage;
+ (id)buttonWithText:(id)a0;
+ (id)_chevronImageForTraitCollection:(id)a0;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_updateFontIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupImagesIfNecessary;
- (void)_updateImageConstraint;

@end
