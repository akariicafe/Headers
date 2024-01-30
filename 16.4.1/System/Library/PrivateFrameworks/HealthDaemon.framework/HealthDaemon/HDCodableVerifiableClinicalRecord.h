@class NSString, HDCodableStringList, HDCodableVerifiableClinicalRecordSubject, NSData, HDCodableSample;

@interface HDCodableVerifiableClinicalRecord : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char expirationDate : 1; unsigned char issuedDate : 1; unsigned char relevantDate : 1; unsigned char sourceType : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (readonly, nonatomic) BOOL hasRecordTypes;
@property (retain, nonatomic) HDCodableStringList *recordTypes;
@property (nonatomic) BOOL hasIssuedDate;
@property (nonatomic) double issuedDate;
@property (nonatomic) BOOL hasRelevantDate;
@property (nonatomic) double relevantDate;
@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (readonly, nonatomic) BOOL hasIssuerIdentifier;
@property (retain, nonatomic) NSString *issuerIdentifier;
@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) HDCodableVerifiableClinicalRecordSubject *subject;
@property (readonly, nonatomic) BOOL hasItemNames;
@property (retain, nonatomic) HDCodableStringList *itemNames;
@property (readonly, nonatomic) BOOL hasDataRepresentation;
@property (retain, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) BOOL hasOriginIdentifier;
@property (retain, nonatomic) NSData *originIdentifier;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) long long sourceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)applyToObject:(id)a0;
- (BOOL)applyToObject:(id)a0 error:(out id *)a1;

@end
