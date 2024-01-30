@class NSUUID, NSString, NSArray, NSLocale, HKMedicalCodingCollection, HKConcept, HKFHIRIdentifierElement, HKMedicalDate, HKCoverageRecordType, HKMedicalCoding;

@interface HKCoverageRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    HKMedicalCoding *_statusCoding;
    HKMedicalCodingCollection *_coverageTypeCodingCollection;
    NSString *_subscriber;
    NSString *_subscriberId;
    NSString *_beneficiary;
    NSString *_policyHolder;
    NSArray *_payor;
    HKMedicalCodingCollection *_relationshipCodingCollection;
    NSArray *_classification;
    NSString *_network;
    HKMedicalDate *_periodStartDate;
    HKMedicalDate *_periodEndDate;
    HKFHIRIdentifierElement *_subscriberIdentifier;
    HKFHIRIdentifierElement *_beneficiaryIdentifier;
    HKConcept *_status;
    HKConcept *_coverageType;
    HKConcept *_relationship;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKCoverageRecordType *coverageRecordType;
@property (readonly, copy) NSString *beneficiary;
@property (readonly, copy) HKFHIRIdentifierElement *beneficiaryIdentifier;
@property (readonly, copy) NSArray *classification;
@property (readonly, copy) HKConcept *coverageType;
@property (readonly, copy) HKMedicalCodingCollection *coverageTypeCodingCollection;
@property (readonly, copy) NSString *network;
@property (readonly, copy) NSArray *payor;
@property (readonly, copy) HKMedicalDate *periodEndDate;
@property (readonly, copy) HKMedicalDate *periodStartDate;
@property (readonly, copy) NSString *policyHolder;
@property (readonly, copy) HKConcept *relationship;
@property (readonly, copy) HKMedicalCodingCollection *relationshipCodingCollection;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) NSString *subscriber;
@property (readonly, copy) NSString *subscriberId;
@property (readonly, copy) HKFHIRIdentifierElement *subscriberIdentifier;

+ (BOOL)supportsEquivalence;
+ (BOOL)_isConcreteObjectClass;
+ (id)_newCoverageRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 statusCoding:(id)a12 coverageTypeCodingCollection:(id)a13 subscriber:(id)a14 subscriberId:(id)a15 beneficiary:(id)a16 policyHolder:(id)a17 payor:(id)a18 relationshipCodingCollection:(id)a19 classification:(id)a20 network:(id)a21 periodStartDate:(id)a22 periodEndDate:(id)a23 subscriberIdentifier:(id)a24 beneficiaryIdentifier:(id)a25 config:(id /* block */)a26;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)coverageRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 statusCoding:(id)a11 coverageTypeCodingCollection:(id)a12 subscriber:(id)a13 subscriberId:(id)a14 beneficiary:(id)a15 policyHolder:(id)a16 payor:(id)a17 relationshipCodingCollection:(id)a18 classification:(id)a19 network:(id)a20 periodStartDate:(id)a21 periodEndDate:(id)a22 subscriberIdentifier:(id)a23 beneficiaryIdentifier:(id)a24;
+ (id)coverageRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 statusCoding:(id)a12 coverageTypeCodingCollection:(id)a13 subscriber:(id)a14 subscriberId:(id)a15 beneficiary:(id)a16 policyHolder:(id)a17 payor:(id)a18 relationshipCodingCollection:(id)a19 classification:(id)a20 network:(id)a21 periodStartDate:(id)a22 periodEndDate:(id)a23 subscriberIdentifier:(id)a24 beneficiaryIdentifier:(id)a25;
+ (id)defaultDisplayString;
+ (id)indexableConceptKeyPaths;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setStatus:(id)a0;
- (id)init;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (void)_setSubscriber:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setBeneficiary:(id)a0;
- (void)_setBeneficiaryIdentifier:(id)a0;
- (void)_setClassification:(id)a0;
- (void)_setCoverageType:(id)a0;
- (void)_setCoverageTypeCodingCollection:(id)a0;
- (void)_setNetwork:(id)a0;
- (void)_setPayor:(id)a0;
- (void)_setPeriodEndDate:(id)a0;
- (void)_setPeriodStartDate:(id)a0;
- (void)_setPolicyHolder:(id)a0;
- (void)_setRelationship:(id)a0;
- (void)_setRelationshipCodingCollection:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (void)_setSubscriberId:(id)a0;
- (void)_setSubscriberIdentifier:(id)a0;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)medicalRecordCodings;
- (id)statusCodingCollection;

@end
