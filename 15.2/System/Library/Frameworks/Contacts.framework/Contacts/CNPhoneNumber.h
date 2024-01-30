@class NSString;

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    struct __CFPhoneNumber { } *_phoneNumberRef;
}

@property (class, readonly) id /* block */ StringValue;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *initialCountryCode;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, copy, nonatomic) NSString *digits;
@property (readonly, copy, nonatomic) NSString *formattedStringValue;
@property (readonly, copy, nonatomic) NSString *formattedInternationalStringValue;
@property (readonly, copy, nonatomic) NSString *unformattedInternationalStringValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unsupportedCountryCodes;
+ (id)phoneNumberWithStringValue:(id)a0;
+ (id)new;
+ (struct __CFPhoneNumber { } *)createCFPhoneNumberForStringValue:(id)a0 countryCode:(id)a1;
+ (id)phoneNumberWithDigits:(id)a0 countryCode:(id)a1;
+ (id)defaultCountryCode;
+ (id)dialingCodeForISOCountryCode:(id)a0;
+ (id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+ (id)_countryCodesForNorthAmericanDialingPlan;
+ (id)phoneNumberWithCopiedStringValue:(id)a0;
+ (BOOL)_isCountryCodeForNorthAmericanDialingPlan:(id)a0;

- (struct __CFPhoneNumber { } *)phoneNumberRef;
- (BOOL)isLikePhoneNumberForSamePerson:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid:(id *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isLikePhoneNumber:(id)a0;
- (id)primitiveInitWithStringValue:(id)a0 countryCode:(id)a1;
- (id)initWithStringValue:(id)a0 countryCode:(id)a1;
- (id)lastFourDigits;
- (struct __CFPhoneNumber { } *)nts_lazyPhoneNumberRef;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)a0;
- (id)_countryCodeFromPhoneNumberRef;
- (BOOL)isFullyQualified;
- (id)fullyQualifiedDigits;
- (id)digitsRemovingDialingCode;
- (id)formattedStringValueRemovingDialingCode;
- (id)initWithStringValue:(id)a0;

@end
