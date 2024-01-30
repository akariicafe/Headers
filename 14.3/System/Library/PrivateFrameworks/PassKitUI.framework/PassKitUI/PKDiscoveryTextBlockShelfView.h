@class UILabel, PKDiscoveryTextBlockShelf, NSAttributedString;

@interface PKDiscoveryTextBlockShelfView : PKDiscoveryShelfView {
    UILabel *_bodyLabel;
    PKDiscoveryTextBlockShelf *_shelf;
    NSAttributedString *_attributedText;
}

- (void).cxx_destruct;
- (id)initWithShelf:(id)a0;
- (id)_attributedStringForBody:(id)a0 lede:(id)a1 headerline:(id)a2;
- (id)_uiFontTextStyle;
- (id)_textColorForBody;
- (id)_textColorForLede;
- (id)_textColorForHeaderline;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
