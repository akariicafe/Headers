@class NSString, UILayoutGuide, MUPunchoutViewModel, UIView, UILabel, UIActivityIndicatorView;
@protocol MULabelViewProtocol;

@interface MUPunchoutView : UIView <MKActivityObserving> {
    UIView<MULabelViewProtocol> *_moreOnLabel;
    UILabel *_vendorNameLabel;
    UILayoutGuide *_layoutGuide;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) MUPunchoutViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredWidth;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_setupSubviews;
- (void)_updateLabelsWithAlpha:(double)a0;
- (id)_attributedStringFromSymbol;

@end
