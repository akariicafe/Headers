@class NSMutableArray;

@interface HDCodableGeneratedObjectCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *medicationOrders;
@property (retain, nonatomic) NSMutableArray *medicationDispenseRecords;
@property (retain, nonatomic) NSMutableArray *medicationRecords;
@property (retain, nonatomic) NSMutableArray *diagnosticTestResults;
@property (retain, nonatomic) NSMutableArray *diagnosticTestReports;
@property (retain, nonatomic) NSMutableArray *vaccinationRecords;
@property (retain, nonatomic) NSMutableArray *conditionRecords;
@property (retain, nonatomic) NSMutableArray *allergyRecords;
@property (retain, nonatomic) NSMutableArray *procedureRecords;
@property (retain, nonatomic) NSMutableArray *accountOwners;
@property (retain, nonatomic) NSMutableArray *unknownRecords;
@property (retain, nonatomic) NSMutableArray *clinicalRecords;
@property (retain, nonatomic) NSMutableArray *coverageRecords;
@property (retain, nonatomic) NSMutableArray *signedClinicalDataRecords;
@property (retain, nonatomic) NSMutableArray *verifiableClinicalRecords;
@property (retain, nonatomic) NSMutableArray *clinicalNoteRecords;
@property (retain, nonatomic) NSMutableArray *medicationDoseEvents;

+ (Class)allergyRecordType;
+ (Class)coverageRecordType;
+ (Class)diagnosticTestResultType;
+ (Class)conditionRecordType;
+ (Class)medicationDispenseRecordType;
+ (Class)medicationRecordType;
+ (Class)procedureRecordType;
+ (Class)vaccinationRecordType;
+ (Class)medicationOrderType;
+ (Class)diagnosticTestReportType;
+ (Class)medicationDoseEventType;
+ (Class)accountOwnerType;
+ (Class)clinicalNoteRecordType;
+ (Class)signedClinicalDataRecordType;
+ (Class)unknownRecordType;
+ (Class)verifiableClinicalRecordType;
+ (Class)clinicalRecordType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)accountOwnerAtIndex:(unsigned long long)a0;
- (unsigned long long)accountOwnersCount;
- (void)addAccountOwner:(id)a0;
- (void)addAllergyRecord:(id)a0;
- (void)addClinicalNoteRecord:(id)a0;
- (void)addClinicalRecord:(id)a0;
- (void)addConditionRecord:(id)a0;
- (void)addCoverageRecord:(id)a0;
- (void)addDiagnosticTestReport:(id)a0;
- (void)addDiagnosticTestResult:(id)a0;
- (void)addMedicationDispenseRecord:(id)a0;
- (void)addMedicationDoseEvent:(id)a0;
- (void)addMedicationOrder:(id)a0;
- (void)addMedicationRecord:(id)a0;
- (void)addProcedureRecord:(id)a0;
- (void)addSignedClinicalDataRecord:(id)a0;
- (void)addUnknownRecord:(id)a0;
- (void)addVaccinationRecord:(id)a0;
- (void)addVerifiableClinicalRecord:(id)a0;
- (id)allergyRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)allergyRecordsCount;
- (void)clearAccountOwners;
- (void)clearAllergyRecords;
- (void)clearClinicalNoteRecords;
- (void)clearClinicalRecords;
- (void)clearConditionRecords;
- (void)clearCoverageRecords;
- (void)clearDiagnosticTestReports;
- (void)clearDiagnosticTestResults;
- (void)clearMedicationDispenseRecords;
- (void)clearMedicationDoseEvents;
- (void)clearMedicationOrders;
- (void)clearMedicationRecords;
- (void)clearProcedureRecords;
- (void)clearSignedClinicalDataRecords;
- (void)clearUnknownRecords;
- (void)clearVaccinationRecords;
- (void)clearVerifiableClinicalRecords;
- (id)clinicalNoteRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)clinicalNoteRecordsCount;
- (id)clinicalRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)clinicalRecordsCount;
- (id)conditionRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)conditionRecordsCount;
- (id)coverageRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)coverageRecordsCount;
- (id)decodedObjects;
- (id)diagnosticTestReportAtIndex:(unsigned long long)a0;
- (unsigned long long)diagnosticTestReportsCount;
- (id)diagnosticTestResultAtIndex:(unsigned long long)a0;
- (unsigned long long)diagnosticTestResultsCount;
- (id)medicationDispenseRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationDispenseRecordsCount;
- (id)medicationDoseEventAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationDoseEventsCount;
- (id)medicationOrderAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationOrdersCount;
- (id)medicationRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)medicationRecordsCount;
- (id)procedureRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)procedureRecordsCount;
- (id)signedClinicalDataRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)signedClinicalDataRecordsCount;
- (BOOL)unitTest_isEquivalentToGeneratedObjectCollection:(id)a0;
- (id)unknownRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)unknownRecordsCount;
- (id)vaccinationRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)vaccinationRecordsCount;
- (id)verifiableClinicalRecordAtIndex:(unsigned long long)a0;
- (unsigned long long)verifiableClinicalRecordsCount;

@end
