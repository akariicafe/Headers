@class NSString, KeychainSyncCountryInfo;

@interface PSKeychainSyncPhoneNumber : NSObject

@property (retain, nonatomic) NSString *digits;
@property (retain, nonatomic) KeychainSyncCountryInfo *countryInfo;

+ (id)phoneNumberWithDigits:(id)a0 countryInfo:(id)a1;

- (id)formattedString;
- (id)_stringByAddingDialingPrefixToString:(id)a0;
- (id)formattedStringWithDialingPrefix;
- (id)formattedAndObfuscatedString;
- (void).cxx_destruct;

@end
