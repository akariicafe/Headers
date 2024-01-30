@class NSString, UILayoutGuide, MUCirclePlatterView, UILabel, NSLayoutConstraint, UITapGestureRecognizer;
@protocol MUDynamicButtonCellModel;

@interface MUButtonCellRowView : MUPlaceSectionRowView <MUDynamicButtonCellModelChangeDelegate> {
    UILayoutGuide *_titleValueLayoutGuide;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    MUCirclePlatterView *_actionPlatterView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSLayoutConstraint *_platterWidthConstraint;
}

@property (retain, nonatomic) id<MUDynamicButtonCellModel> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeDidChange;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_updateAppearance;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_setupSubviews;
- (void)_buttonCellTapped;
- (double)_platterLength;
- (void)dynamicButtonCellModelDidChange:(id)a0;

@end
