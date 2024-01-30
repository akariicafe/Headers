@class UITapGestureRecognizer, NSString, MUPlaceRibbonItemViewModel, UIView, MUHairlineView;
@protocol MULabelViewProtocol;

@interface MUPlaceRibbonItemView : UIView <MUPlaceRibbonItemViewModelUpdateDelegate, MKActivityObserving> {
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_valueLabel;
    MUHairlineView *_trailingHairlineView;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_selectRecognizer;
}

@property (copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) BOOL showTrailingHairline;
@property (retain, nonatomic) MUPlaceRibbonItemViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateGestureRecognizers;
- (void)_handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)beginAnimatingActivityIndicator;
- (void)endAnimatingActivityIndicatorWithError:(id)a0;
- (void)_setAXIdentifierWithItemType:(id)a0;
- (void)_updateLabelWithAlpha:(double)a0;
- (void)_updateValueText;
- (void)ribbonItemViewModelDidUpdate:(id)a0;

@end
