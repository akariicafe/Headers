@class TLKLabel, TLKStackView;

@interface TLKSelectableGridButton : UIButton {
    BOOL _customHighlight;
}

@property (retain, nonatomic) TLKLabel *topLabel;
@property (retain, nonatomic) TLKLabel *bottomLabel;
@property (retain, nonatomic) TLKStackView *stackView;
@property (nonatomic) BOOL customHighlight;

+ (id)selectableGridButton;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)setTitle:(id)a0 subtitle:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
