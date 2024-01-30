@class NSDictionary;

@interface _UIActivityIndicatorMessageLabel : UILabel

@property (copy, nonatomic) NSDictionary *regularTextAttributes;
@property (readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes;
@property (readonly, nonatomic) double verticalSpacingToSpinner;

+ (id)defaultRegularContentSizeTextAttributes;

- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithRegularTextAttributes:(id)a0;
- (id)_validatedAttributedString:(id)a0;
- (void)_ensureCapableOfCalculatingBaselineOffsets;
- (void)setEffectiveTextAttributes:(id)a0;
- (double)_effectiveVerticalSpacingToSpinner;
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)a0;

@end
