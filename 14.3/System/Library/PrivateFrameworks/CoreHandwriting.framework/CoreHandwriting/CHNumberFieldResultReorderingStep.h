@class NSDictionary, NSCharacterSet;

@interface CHNumberFieldResultReorderingStep : CHPostprocessingStep

@property (retain, nonatomic) NSCharacterSet *allowedCharacters;
@property (retain, nonatomic) NSDictionary *characterReplacements;

+ (id)tokenRowAsString:(id)a0;

- (void)dealloc;
- (id)process:(id)a0;
- (id)initForPhoneNumberFields;
- (id)initForDigitFields;
- (long long)countUnallowedCharactersInString:(id)a0;
- (long long)compareStringForPhoneNumberCompatibility:(id)a0 with:(id)a1;

@end
