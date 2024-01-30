@class UIColor, NSString, UIView, UILabel, NSAttributedString, NSMutableArray;

@interface BFFLinkLabelFooterView : UIView {
    UILabel *_label;
    UILabel *_subtitleLabel;
    NSMutableArray *_linkHandlers;
    UIView *_topLine;
}

@property (nonatomic) double flexibleHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSAttributedString *attributedSubtitleText;
@property (nonatomic) BOOL wantsSideBySideLayout;
@property (nonatomic) BOOL wantsFromBottomLayout;
@property (retain, nonatomic) UIColor *topLineColor;

+ (void)initialize;

- (void).cxx_destruct;
- (void)removeAllLinks;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 shouldSetSize:(BOOL)a1;
- (unsigned long long)numberOfLinks;
- (void)addLinkWithTitle:(id)a0 textStyle:(id)a1 handler:(id /* block */)a2;
- (void)removeLinkAtIndex:(unsigned long long)a0;
- (void)addLinkWithTitle:(id)a0 handler:(id /* block */)a1;

@end
