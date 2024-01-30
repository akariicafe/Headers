@class UIStackView, WKWallpaperBundleCollection, UILabel, NSLayoutConstraint, UIButton;
@protocol WSBundleCollectionOptionViewDelegate;

@interface WSBundleCollectionOptionView : UIView

@property (retain, nonatomic) UIStackView *_stackView;
@property (retain, nonatomic) UIButton *_button;
@property (retain, nonatomic) UILabel *_label;
@property (retain, nonatomic) NSLayoutConstraint *_buttonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *_buttonWidthConstraint;
@property (readonly, nonatomic) WKWallpaperBundleCollection *bundleCollection;
@property (weak, nonatomic) id<WSBundleCollectionOptionViewDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } canonicalButtonSize;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_configureView;
- (id)_imageForButtonForCurrentInterfaceStyle;
- (void)_userDidTapButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bundleCollection:(id)a1 canonicalButtonSize:(struct CGSize { double x0; double x1; })a2;

@end
