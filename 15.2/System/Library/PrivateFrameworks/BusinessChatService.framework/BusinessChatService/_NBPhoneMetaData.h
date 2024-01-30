@class _NBPhoneNumberDesc, NSString, NSArray, NSNumber;

@interface _NBPhoneMetaData : NSObject

@property (retain, nonatomic) _NBPhoneNumberDesc *generalDesc;
@property (retain, nonatomic) _NBPhoneNumberDesc *fixedLine;
@property (retain, nonatomic) _NBPhoneNumberDesc *mobile;
@property (retain, nonatomic) _NBPhoneNumberDesc *tollFree;
@property (retain, nonatomic) _NBPhoneNumberDesc *premiumRate;
@property (retain, nonatomic) _NBPhoneNumberDesc *sharedCost;
@property (retain, nonatomic) _NBPhoneNumberDesc *personalNumber;
@property (retain, nonatomic) _NBPhoneNumberDesc *voip;
@property (retain, nonatomic) _NBPhoneNumberDesc *pager;
@property (retain, nonatomic) _NBPhoneNumberDesc *uan;
@property (retain, nonatomic) _NBPhoneNumberDesc *emergency;
@property (retain, nonatomic) _NBPhoneNumberDesc *voicemail;
@property (retain, nonatomic) _NBPhoneNumberDesc *noInternationalDialling;
@property (retain, nonatomic) NSString *codeID;
@property (retain, nonatomic) NSNumber *countryCode;
@property (retain, nonatomic) NSString *internationalPrefix;
@property (retain, nonatomic) NSString *preferredInternationalPrefix;
@property (retain, nonatomic) NSString *nationalPrefix;
@property (retain, nonatomic) NSString *preferredExtnPrefix;
@property (retain, nonatomic) NSString *nationalPrefixForParsing;
@property (retain, nonatomic) NSString *nationalPrefixTransformRule;
@property (nonatomic) BOOL sameMobileAndFixedLinePattern;
@property (retain, nonatomic) NSArray *numberFormats;
@property (retain, nonatomic) NSArray *intlNumberFormats;
@property (nonatomic) BOOL mainCountryForCode;
@property (retain, nonatomic) NSString *leadingDigits;
@property (nonatomic) BOOL leadingZeroPossible;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithEntry:(id)a0;
- (id)numberFormatsFromEntry:(id)a0;

@end
