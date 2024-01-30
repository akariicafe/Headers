@class NSDictionary, NSArray;

@interface TCFontFamily : NSObject

@property (readonly, nonatomic) NSDictionary *namesByLanguage;
@property (readonly, nonatomic) NSArray *members;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)equivalentDictionary;
- (id)englishName;
- (id)bestMatchForStyling:(struct TCFontStyling { int x0; unsigned int x1; char x2; BOOL x3; int x4; })a0;
- (id)regularVariant:(BOOL)a0;
- (BOOL)allFamilyIsBold;
- (id)weightVariantsOfFont:(id)a0;
- (unsigned long long)boldFontIndexInWeightVariants:(id)a0;
- (unsigned long long)regularFontIndexInWeightVariants:(id)a0;
- (BOOL)traitsAreAdditive;
- (id)initWithNamesByLanguage:(id)a0 members:(id)a1;
- (id)memberForPSName:(id)a0;
- (id)memberForFullName:(id)a0;
- (BOOL)allFamilyIsItalic;
- (id)variantByTogglingItalicOfFont:(id)a0;
- (id)variantByAddingBoldToFont:(id)a0;
- (id)variantByRemovingBoldFromFont:(id)a0;
- (BOOL)doesAnyNonBoldVariantExistForFont:(id)a0;

@end
