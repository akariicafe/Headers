@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableFHIRIdentifierList, HDCodableMedicalRecord;

@interface HDCodableDiagnosticTestReport : PBCodable <HDDecoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasDiagnosticTestCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *diagnosticTestCodingCollection;
@property (readonly, nonatomic) BOOL hasPanelName;
@property (retain, nonatomic) NSString *panelName;
@property (readonly, nonatomic) BOOL hasResults;
@property (retain, nonatomic) HDCodableFHIRIdentifierList *results;
@property (readonly, nonatomic) BOOL hasEffectiveStartDate;
@property (retain, nonatomic) NSData *effectiveStartDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasEffectiveEndDate;
@property (retain, nonatomic) NSData *effectiveEndDate;
@property (readonly, nonatomic) BOOL hasIssueDate;
@property (retain, nonatomic) NSData *issueDate;

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
