@class HKAccountOwnerType, HKMedicalDate, NSString;

@interface HKAccountOwner : HKMedicalRecord <NSSecureCoding, NSCopying> {
    NSString *_name;
    HKMedicalDate *_birthDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HKAccountOwnerType *accountOwnerType;
@property (readonly, copy) HKMedicalDate *birthDate;
@property (readonly, copy) NSString *name;

+ (id)_newAccountOwnerWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 name:(id)a12 birthDate:(id)a13 config:(id /* block */)a14;
+ (id)accountOwnerWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 name:(id)a11 birthDate:(id)a12;
+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;
+ (id)accountOwnerWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 name:(id)a12 birthDate:(id)a13;

- (void)encodeWithCoder:(id)a0;
- (void)_setName:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)description;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setBirthDate:(id)a0;

@end
