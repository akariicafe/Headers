@class UIColor, NSAttributedString;

@interface TopHitCompletionView : UIView {
    NSAttributedString *_attributedText;
    unsigned long long _highlightStartIndex;
}

@property (copy, nonatomic) UIColor *highlightColor;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setAttributedText:(id)a0 highlightStartIndex:(unsigned long long)a1;

@end
