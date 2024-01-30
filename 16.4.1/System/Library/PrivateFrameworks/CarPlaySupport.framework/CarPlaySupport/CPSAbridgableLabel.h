@class NSArray;

@interface CPSAbridgableLabel : UILabel

@property (nonatomic) unsigned long long variantsIndex;
@property (nonatomic) BOOL useAttributedTextVariants;
@property (copy, nonatomic) NSArray *textVariants;
@property (copy, nonatomic) NSArray *attributedTextVariants;

+ (id)sanitizedTextForText:(id)a0;

- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_numberOfVariants;
- (long long)_compareBoundsSizeToLayoutSizeForString:(id)a0;
- (void)_updateVariant;
- (id)_variantsList;
- (id)sanitizedAttributedStringForString:(id)a0;

@end
