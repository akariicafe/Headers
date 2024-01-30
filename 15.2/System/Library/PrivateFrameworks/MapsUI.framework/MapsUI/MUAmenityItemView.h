@class UIImageView, NSLayoutConstraint, UIView;
@protocol MUAmenityItemViewModel, MULabelViewProtocol;

@interface MUAmenityItemView : MKViewWithHairline {
    UIImageView *_imageView;
    UIView<MULabelViewProtocol> *_titleLabel;
    NSLayoutConstraint *_imageWidthConstraint;
}

@property (retain, nonatomic) id<MUAmenityItemViewModel> viewModel;

- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)_setupSubviews;

@end
