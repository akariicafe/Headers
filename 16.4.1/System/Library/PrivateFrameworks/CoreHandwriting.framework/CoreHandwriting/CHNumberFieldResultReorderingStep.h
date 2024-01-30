@class NSDictionary, NSCharacterSet;

@interface CHNumberFieldResultReorderingStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) NSCharacterSet *allowedCharacters;
@property (retain, nonatomic) NSDictionary *characterReplacements;

+ (id)tokenRowAsString:(id)a0;

- (void).cxx_destruct;
- (long long)compareStringForPhoneNumberCompatibility:(id)a0 with:(id)a1;
- (long long)countUnallowedCharactersInString:(id)a0;
- (id)initForDigitFields;
- (id)initForPhoneNumberFields;
- (id)process:(id)a0 options:(id)a1;

@end
