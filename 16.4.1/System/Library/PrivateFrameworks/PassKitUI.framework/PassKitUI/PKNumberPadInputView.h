@class UIColor, UIStackView, NSNumberFormatter, NSMutableArray;

@interface PKNumberPadInputView : UIInputView {
    unsigned char _batchedUpdateCount;
    BOOL _needsReload;
    BOOL _needsUpdate;
    NSNumberFormatter *_formatter;
    UIStackView *_verticalStackView;
    NSMutableArray *_buttons;
}

@property (nonatomic) BOOL showsDecimalPointButton;
@property (copy, nonatomic) UIColor *numberPadColor;
@property (copy, nonatomic) UIColor *textColor;

+ (struct CGSize { double x0; double x1; })defaultSizeForInterfaceOrientation:(long long)a0;

- (void)performBatchUpdates:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateButtons;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewStyle:(long long)a1;
- (void)_reloadSubviews;
- (id)_createBorderedButtonForButtonValue:(unsigned long long)a0 withBorder:(unsigned long long)a1 primaryAction:(id)a2;
- (void)_numericKeyPressed:(unsigned long long)a0;
- (void)_performDelete;
- (void)_performInsertion:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configurator:(id /* block */)a1;

@end
