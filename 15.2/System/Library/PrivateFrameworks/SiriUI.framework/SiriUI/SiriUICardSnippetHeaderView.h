@class SiriUIContentLabel;

@interface SiriUICardSnippetHeaderView : SiriUIReusableHeaderView {
    SiriUIContentLabel *_titleLabel;
}

+ (double)defaultHeight;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureWithTitle:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsets;

@end
