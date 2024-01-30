@class NSString, NSDictionary, NSURL, NSDate, NSArray, NSData;

@interface WBSTOTPGenerator : NSObject {
    NSData *_key;
    NSArray *_cachedHeuristicallyDeterminedServiceNameHints;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *issuer;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSDate *initialDate;
@property (readonly, nonatomic) unsigned long long codeGenerationPeriod;
@property (readonly, nonatomic) unsigned long long algorithm;
@property (readonly, nonatomic) unsigned long long numberOfDigitsInCode;
@property (copy, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSArray *heuristicallyDeterminedServiceNameHints;

+ (BOOL)_urlWithComponentsHasValidOtpauthURLScheme:(id)a0;
+ (id)_keyDataForBase32EncodedString:(id)a0;
+ (id)_base32EncodedStringForKeyData:(id)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)_algorithmForQueryItemValue:(id)a0;
- (id)_initWithKeyData:(id)a0 initialDate:(id)a1 codeGenerationPeriod:(unsigned long long)a2 numberOfDigits:(unsigned long long)a3 algorithm:(unsigned long long)a4 issuer:(id)a5 accountName:(id)a6 originalURL:(id)a7;
- (id)initWithBase32EncodedKey:(id)a0 initialDate:(id)a1 codeGenerationPeriod:(unsigned long long)a2 numberOfDigits:(unsigned long long)a3 algorithm:(unsigned long long)a4;
- (id)_stringForAlgorithm:(unsigned long long)a0;
- (unsigned long long)_HMACLengthForAlgorithm:(unsigned long long)a0;
- (unsigned int)_commonCryptoAlgorithmForTOTPAlgorithm:(unsigned long long)a0;
- (unsigned long long)_numberOfIntervalsSinceInitialDateForDate:(id)a0;
- (id)initWithOTPAuthURL:(id)a0;
- (id)initWithASCIIEncodedKey:(id)a0 initialDate:(id)a1 codeGenerationPeriod:(unsigned long long)a2 numberOfDigits:(unsigned long long)a3 algorithm:(unsigned long long)a4;
- (id)initWithBase32EncodedKey:(id)a0;
- (id)exportableURLWithIssuer:(id)a0 username:(id)a1;
- (id)codeForDate:(id)a0;
- (id)startDateOfIntervalContainingDate:(id)a0;

@end
