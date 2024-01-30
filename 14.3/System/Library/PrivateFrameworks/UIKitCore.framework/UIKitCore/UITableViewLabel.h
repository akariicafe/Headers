@class UITableViewCell, NSAttributedString;

@interface UITableViewLabel : UILabel {
    long long _savedNumberOfLines;
    double _firstParagraphFirstLineHeadIndent;
    NSAttributedString *_shadowAttributedText;
}

@property (weak, nonatomic) UITableViewCell *tableCell;
@property (readonly, nonatomic) BOOL usingDefaultFont;

- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)_clearNumberOfLines;
- (void)_setNumberOfLinesForAXLayoutIfNecessary;
- (void)setFont:(id)a0;
- (void)_setFirstParagraphFirstLineHeadIndent:(double)a0;
- (void)_setDefaultFont:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_cleanupErrantFirstLineHeadIndent;
- (id)_disabledFontColor;
- (BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setText:(id)a0;
- (void)_restoreNumberOfLines;

@end
