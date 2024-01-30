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

+ (id)new;
+ (id)phoneNumberWithDigits:(id)a0 countryCode:(id)a1;
+ (id)phoneNumberWithStringValue:(id)a0;
+ (id)defaultCountryCode;
+ (id)_countryCodeForNorthAmericanDialingPlanAreaCodesExcludingUS;
+ (id)_countryCodesForNorthAmericanDialingPlan;
+ (BOOL)_isCountryCodeForNorthAmericanDialingPlan:(id)a0;
+ (struct __CFPhoneNumber { } *)createCFPhoneNumberForStringValue:(id)a0 countryCode:(id)a1;
+ (id)dialingCodeForISOCountryCode:(id)a0;
+ (id)phoneNumberWithCopiedStringValue:(id)a0;
+ (id)unsupportedCountryCodes;

- (BOOL)isValid:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isLikePhoneNumber:(id)a0;
- (id)initWithStringValue:(id)a0;
- (BOOL)isLikePhoneNumberForSamePerson:(id)a0;
- (id)_countryCodeFromPhoneNumberRef;
- (id)digitsRemovingDialingCode;
- (id)formattedStringValueRemovingDialingCode;
- (id)fullyQualifiedDigits;
- (id)initWithStringValue:(id)a0 countryCode:(id)a1;
- (BOOL)isFullyQualified;
- (id)lastFourDigits;
- (struct __CFPhoneNumber { } *)nts_lazyPhoneNumberRef;
- (struct __CFPhoneNumber { } *)phoneNumberRef;
- (id)primitiveInitWithStringValue:(id)a0 countryCode:(id)a1;
- (id)stringValueWithCFPhoneNumberOptions:(unsigned long long)a0;

@end
