@class NSArray, UIView;

@interface _UIDynamicCaretAlternatives : UIView

@property (retain, nonatomic) UIView *verticalDivider;
@property (retain, nonatomic) UIView *horizontalDivider;
@property (retain, nonatomic) NSArray *alternativesButtons;

- (void)layoutSubviews;
- (void)setButtonLabels:(id)a0;
- (long long)indexOfButtonForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)highlightButtonAtIndex:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
