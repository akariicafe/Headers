@class NSString, HDCodableSignedClinicalDataItemList, HDCodableStringList, NSData, HDCodableSignedClinicalDataSubject, HDCodableMedicalRecord;

@interface HDCodableSignedClinicalDataRecord : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char expirationDate : 1; unsigned char issuedDate : 1; unsigned char relevantDate : 1; unsigned char signatureStatus : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasCredentialTypes;
@property (retain, nonatomic) HDCodableStringList *credentialTypes;
@property (readonly, nonatomic) BOOL hasIssuerIdentifier;
@property (retain, nonatomic) NSString *issuerIdentifier;
@property (nonatomic) BOOL hasIssuedDate;
@property (nonatomic) double issuedDate;
@property (nonatomic) BOOL hasRelevantDate;
@property (nonatomic) double relevantDate;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (nonatomic) BOOL hasSignatureStatus;
@property (nonatomic) long long signatureStatus;
@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) HDCodableSignedClinicalDataSubject *subject;
@property (readonly, nonatomic) BOOL hasItems;
@property (retain, nonatomic) HDCodableSignedClinicalDataItemList *items;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end
