@class NSString, NSAttributedString;

@interface CKTextTighteningLabel : UILabel

@property (retain, nonatomic) NSAttributedString *tightenedAttributedText;
@property (nonatomic) double tightenedAttributedTextBoundsWidth;
@property (retain, nonatomic) NSAttributedString *untightenedAttributedText;
@property (nonatomic) double untightenedAttributedTextBoundsWidth;
@property (copy, nonatomic) NSString *managedText;

+ (void)applyKerning:(double)a0 whitespaceKerning:(double)a1 toAttributedString:(id)a2;
+ (id)_attributedStringWithText:(id)a0 font:(id)a1 sizeCategory:(id)a2 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 forFittingSize:(BOOL)a4;
+ (BOOL)attributedText:(id)a0 fitsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_attributedTextForFittingSize:(BOOL)a0 boundsSize:(struct CGSize { double x0; double x1; })a1;
- (void)_clearTextTighteningCaches;
- (void)_updateAttributedTextForFittingSize:(BOOL)a0 boundsSize:(struct CGSize { double x0; double x1; })a1;
- (void)_updateTightenedAttributedText;

@end
