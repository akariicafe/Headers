@class NSString, NSArray, NSMutableCharacterSet, NSNumberFormatter;

@interface PKPaymentSetupFieldText : PKPaymentSetupField {
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
    NSMutableCharacterSet *_allowedCharacters;
}

@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic, getter=isSecureText) BOOL secureText;
@property (nonatomic, getter=isSecureVisibleText) BOOL secureVisibleText;
@property (nonatomic, getter=isNumeric) BOOL numeric;
@property (nonatomic, getter=useLuhnCheck) BOOL luhnCheck;
@property (copy, nonatomic) NSString *displayFormatPlaceholder;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) BOOL keepPaddingCharactersForSubmission;
@property (retain, nonatomic) NSArray *paddingCharacters;
@property (copy, nonatomic) NSMutableCharacterSet *allowedCharacters;

- (void)setDefaultValue:(id)a0;
- (id)displayString;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)fieldType;
- (void)setCurrentValue:(id)a0;
- (void).cxx_destruct;
- (id)_submissionStringForValue:(id)a0;
- (id)displayFormatPaddingCharacters;
- (BOOL)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)a0;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateDisplayFormat:(id)a0;
- (void)updateWithAttribute:(id)a0;
- (void)updateWithConfiguration:(id)a0;

@end
