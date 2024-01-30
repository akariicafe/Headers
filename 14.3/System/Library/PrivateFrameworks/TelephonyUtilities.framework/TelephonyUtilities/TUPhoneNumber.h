@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct __CFPhoneNumber { } *phoneNumberRef;
@property (readonly) NSString *digits;
@property (readonly) NSString *countryCode;
@property (readonly) NSString *formattedRepresentation;
@property (readonly) NSString *formattedInternationalRepresentation;
@property (readonly) NSString *unformattedInternationalRepresentation;

+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { } *)a0;
+ (BOOL)areDigits:(id)a0 equalToDigits:(id)a1 usingCountryCode:(id)a2;
+ (id)phoneNumberWithDigits:(id)a0 countryCode:(id)a1;

- (id)formattedRepresentation;
- (id)initWithDigits:(id)a0 countryCode:(id)a1;
- (void)dealloc;
- (id)countryCode;
- (id)initWithCoder:(id)a0;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)unformattedInternationalRepresentation;
- (id)formattedInternationalRepresentation;
- (id)digits;
- (void)encodeWithCoder:(id)a0;

@end
