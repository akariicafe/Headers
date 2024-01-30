@class HDCodableMedicalCodingList, NSString, NSData, HDCodableStringList, HDCodableMedicalRecord, HDCodableFHIRIdentifierElement, HDCodableMedicalCoding, HDCodableCoverageClassificationList;

@interface HDCodableCoverageRecord : PBCodable <HDDecoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasCoverageTypeCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *coverageTypeCodingCollection;
@property (readonly, nonatomic) BOOL hasSubscriber;
@property (retain, nonatomic) NSString *subscriber;
@property (readonly, nonatomic) BOOL hasSubscriberId;
@property (retain, nonatomic) NSString *subscriberId;
@property (readonly, nonatomic) BOOL hasBeneficiary;
@property (retain, nonatomic) NSString *beneficiary;
@property (readonly, nonatomic) BOOL hasPolicyHolder;
@property (retain, nonatomic) NSString *policyHolder;
@property (readonly, nonatomic) BOOL hasPayor;
@property (retain, nonatomic) HDCodableStringList *payor;
@property (readonly, nonatomic) BOOL hasRelationshipCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *relationshipCodingCollection;
@property (readonly, nonatomic) BOOL hasClassification;
@property (retain, nonatomic) HDCodableCoverageClassificationList *classification;
@property (readonly, nonatomic) BOOL hasNetwork;
@property (retain, nonatomic) NSString *network;
@property (readonly, nonatomic) BOOL hasPeriodStartDate;
@property (retain, nonatomic) NSData *periodStartDate;
@property (readonly, nonatomic) BOOL hasPeriodEndDate;
@property (retain, nonatomic) NSData *periodEndDate;
@property (readonly, nonatomic) BOOL hasSubscriberIdentifier;
@property (retain, nonatomic) HDCodableFHIRIdentifierElement *subscriberIdentifier;
@property (readonly, nonatomic) BOOL hasBeneficiaryIdentifier;
@property (retain, nonatomic) HDCodableFHIRIdentifierElement *beneficiaryIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end
