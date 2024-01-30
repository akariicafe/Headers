@class UIColor, UIStackView;

@interface PKNumberPadInputView : UIInputView {
    UIStackView *_verticalStackView;
}

@property (nonatomic) BOOL showsDecimalPointButton;
@property (copy, nonatomic) UIColor *numberPadColor;
@property (copy, nonatomic) UIColor *textColor;

+ (struct CGSize { double x0; double x1; })defaultSizeForInterfaceOrientation:(long long)a0;

- (void).cxx_destruct;
- (void)_reloadSubviews;
- (void)_performDelete;
- (void)_performInsertion:(id)a0;
- (void)_numericKeyPressed:(id)a0;
- (id)initWithDefaultFrameForInterfaceOrientation:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
