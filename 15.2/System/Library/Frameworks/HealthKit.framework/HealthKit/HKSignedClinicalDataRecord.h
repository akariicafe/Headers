@class NSDate, NSString, NSUUID, NSArray, NSData, NSLocale, HKSignedClinicalDataRecordType, HKSignedClinicalDataSubject;

@interface HKSignedClinicalDataRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    NSArray *_credentialTypes;
    NSString *_issuerIdentifier;
    NSDate *_issuedDate;
    NSDate *_relevantDate;
    NSDate *_expirationDate;
    long long _signatureStatus;
    HKSignedClinicalDataSubject *_subject;
    NSArray *_items;
    NSData *_dataValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *recordTypeDisplayName;
@property (readonly, copy, nonatomic) NSString *recordItemsDisplayName;
@property (readonly, copy, nonatomic) NSString *recordIssuerDisplayName;
@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKSignedClinicalDataRecordType *signedClinicalDataRecordType;
@property (readonly, copy) NSArray *credentialTypes;
@property (readonly, copy) NSData *dataValue;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly, copy) NSDate *issuedDate;
@property (readonly, copy) NSString *issuerIdentifier;
@property (readonly, copy) NSArray *items;
@property (readonly, copy) NSDate *relevantDate;
@property (readonly) long long signatureStatus;
@property (readonly, copy) HKSignedClinicalDataSubject *subject;

+ (id)signedClinicalDataRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 credentialTypes:(id)a12 issuerIdentifier:(id)a13 issuedDate:(id)a14 relevantDate:(id)a15 expirationDate:(id)a16 signatureStatus:(long long)a17 subject:(id)a18 items:(id)a19 dataValue:(id)a20;
+ (id)_newSignedClinicalDataRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 credentialTypes:(id)a12 issuerIdentifier:(id)a13 issuedDate:(id)a14 relevantDate:(id)a15 expirationDate:(id)a16 signatureStatus:(long long)a17 subject:(id)a18 items:(id)a19 dataValue:(id)a20 config:(id /* block */)a21;
+ (id)signedClinicalDataRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 credentialTypes:(id)a11 issuerIdentifier:(id)a12 issuedDate:(id)a13 relevantDate:(id)a14 expirationDate:(id)a15 signatureStatus:(long long)a16 subject:(id)a17 items:(id)a18 dataValue:(id)a19;
+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;
+ (id)indexableConceptKeyPaths;
+ (id)cachedConceptRelationshipKeyPaths;

- (void)_setExpirationDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setSubject:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void)_setCredentialTypes:(id)a0;
- (void)_setIssuerIdentifier:(id)a0;
- (void)_setIssuedDate:(id)a0;
- (void)_setRelevantDate:(id)a0;
- (void)_setSignatureStatus:(long long)a0;
- (void)_setDataValue:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setItems:(id)a0;

@end
