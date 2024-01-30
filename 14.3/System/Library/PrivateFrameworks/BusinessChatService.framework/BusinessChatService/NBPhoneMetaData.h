@class NSString, NSArray, NSNumber, NBPhoneNumberDesc;

@interface NBPhoneMetaData : NSObject

@property (retain, nonatomic) NBPhoneNumberDesc *generalDesc;
@property (retain, nonatomic) NBPhoneNumberDesc *fixedLine;
@property (retain, nonatomic) NBPhoneNumberDesc *mobile;
@property (retain, nonatomic) NBPhoneNumberDesc *tollFree;
@property (retain, nonatomic) NBPhoneNumberDesc *premiumRate;
@property (retain, nonatomic) NBPhoneNumberDesc *sharedCost;
@property (retain, nonatomic) NBPhoneNumberDesc *personalNumber;
@property (retain, nonatomic) NBPhoneNumberDesc *voip;
@property (retain, nonatomic) NBPhoneNumberDesc *pager;
@property (retain, nonatomic) NBPhoneNumberDesc *uan;
@property (retain, nonatomic) NBPhoneNumberDesc *emergency;
@property (retain, nonatomic) NBPhoneNumberDesc *voicemail;
@property (retain, nonatomic) NBPhoneNumberDesc *noInternationalDialling;
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

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntry:(id)a0;
- (id)numberFormatsFromEntry:(id)a0;

@end
