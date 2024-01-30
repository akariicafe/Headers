@class UILayoutGuide, MUCirclePlatterView, UIView, NSLayoutConstraint, UITapGestureRecognizer;
@protocol MULabeledValueActionViewModelProviding, MULabelViewProtocol;

@interface MULabeledValueActionRowView : MUPlaceSectionRowView {
    UILayoutGuide *_titleValueLayoutGuide;
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_valueLabel;
    UIView<MULabelViewProtocol> *_tertiaryLabel;
    MUCirclePlatterView *_actionPlatterView;
    NSLayoutConstraint *_actionPlatterWidthConstraint;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) id<MULabeledValueActionViewModelProviding> viewModel;

- (void)copy:(id)a0;
- (void)_contentSizeDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)_setupSubviews;
- (double)_platterLength;
- (id)_valueLabelFont;
- (void)_actionButtonTapped;

@end
