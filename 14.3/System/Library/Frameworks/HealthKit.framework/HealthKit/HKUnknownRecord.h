@class NSString, HKUnknownRecordType;

@interface HKUnknownRecord : HKMedicalRecord <NSSecureCoding, NSCopying> {
    NSString *_displayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HKUnknownRecordType *unknownRecordType;
@property (readonly, copy) NSString *displayName;

+ (id)unknownRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 displayName:(id)a11;
+ (id)unknownRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 displayName:(id)a12;
+ (id)_newUnknownRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 FHIRIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 displayName:(id)a12 config:(id /* block */)a13;
+ (BOOL)supportsEquivalence;
+ (id)defaultDisplayString;
+ (BOOL)_isConcreteObjectClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)fallbackDisplayString;
- (id)description;
- (void)_setDisplayName:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
