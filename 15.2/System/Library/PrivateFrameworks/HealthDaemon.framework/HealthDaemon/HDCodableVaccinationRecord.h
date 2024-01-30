@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableMedicalCodingListList, HDCodableMedicalRecord;

@interface HDCodableVaccinationRecord : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char notGiven : 1; unsigned char patientReported : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasVaccinationCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *vaccinationCodings;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (retain, nonatomic) NSData *expirationDate;
@property (readonly, nonatomic) BOOL hasDoseNumber;
@property (retain, nonatomic) NSString *doseNumber;
@property (readonly, nonatomic) BOOL hasDoseQuantity;
@property (retain, nonatomic) NSString *doseQuantity;
@property (readonly, nonatomic) BOOL hasPerformer;
@property (retain, nonatomic) NSString *performer;
@property (readonly, nonatomic) BOOL hasBodySiteCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *bodySiteCodings;
@property (readonly, nonatomic) BOOL hasReaction;
@property (retain, nonatomic) NSString *reaction;
@property (nonatomic) BOOL hasNotGiven;
@property (nonatomic) BOOL notGiven;
@property (readonly, nonatomic) BOOL hasAdministrationDate;
@property (retain, nonatomic) NSData *administrationDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (nonatomic) BOOL hasPatientReported;
@property (nonatomic) BOOL patientReported;
@property (readonly, nonatomic) BOOL hasRouteCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *routeCodings;
@property (readonly, nonatomic) BOOL hasReasonsCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsCodings;
@property (readonly, nonatomic) BOOL hasReasonsNotGivenCodings;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotGivenCodings;

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
