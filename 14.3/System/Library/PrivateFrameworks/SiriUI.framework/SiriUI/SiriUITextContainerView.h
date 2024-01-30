@class UIFont, NSString, UIColor, SiriUIContentLabel, UIView;

@interface SiriUITextContainerView : UIView {
    SiriUIContentLabel *_label;
    UIView *_containerView;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct { unsigned long long numberOfLines; double distanceFromTopToBaseline; double distanceFromBaselineToBottom; struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets; } textContainerStyle;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 text:(id)a1 font:(id)a2 textContainerStyle:(struct { unsigned long long x0; double x1; double x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textBoundingRectWithSize:(struct CGSize { double x0; double x1; })a0 text:(id)a1 font:(id)a2 textContainerStyle:(struct { unsigned long long x0; double x1; double x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a3;
+ (double)_distanceFromBaselineToBottomWithFont:(id)a0 textContainerStyle:(struct { unsigned long long x0; double x1; double x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a1;
+ (double)_distanceFromTopToBaselineWithFont:(id)a0 textContainerStyle:(struct { unsigned long long x0; double x1; double x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; })a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithText:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithText:(id)a0 visualEffect:(id)a1;

@end
