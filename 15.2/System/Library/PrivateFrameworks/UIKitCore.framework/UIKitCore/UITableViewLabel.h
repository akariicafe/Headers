@class UITableViewCell, NSAttributedString;

@interface UITableViewLabel : UILabel {
    long long _savedNumberOfLines;
    double _firstParagraphFirstLineHeadIndent;
    NSAttributedString *_shadowAttributedText;
}

@property (weak, nonatomic) UITableViewCell *tableCell;
@property (readonly, nonatomic) BOOL usingDefaultFont;

- (void)setFont:(id)a0;
- (BOOL)_attributedStringHasParagraphStyleWithNonzeroFirstLineHeadIndent:(id)a0;
- (void)_cleanupErrantFirstLineHeadIndent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_disabledFontColor;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)_setFirstParagraphFirstLineHeadIndent:(double)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setNumberOfLinesForAXLayoutIfNecessary;
- (id)initWithCoder:(id)a0;
- (void)_clearNumberOfLines;
- (void)_restoreNumberOfLines;
- (void)_setDefaultFont:(id)a0;

@end
