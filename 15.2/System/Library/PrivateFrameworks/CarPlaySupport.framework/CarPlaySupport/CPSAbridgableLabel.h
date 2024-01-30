@class NSArray;

@interface CPSAbridgableLabel : UILabel

@property (nonatomic) unsigned long long variantsIndex;
@property (nonatomic) BOOL useAttributedTextVariants;
@property (copy, nonatomic) NSArray *textVariants;
@property (copy, nonatomic) NSArray *attributedTextVariants;

+ (id)sanitizedTextForText:(id)a0;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_numberOfVariants;
- (void)_updateVariant;
- (id)sanitizedAttributedStringForString:(id)a0;
- (id)_variantsList;
- (long long)_compareBoundsSizeToLayoutSizeForString:(id)a0;

@end
