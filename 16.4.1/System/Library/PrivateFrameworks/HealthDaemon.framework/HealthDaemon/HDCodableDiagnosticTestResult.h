@class HDCodableMedicalCodingList, NSString, HDCodableReferenceRangeList, NSData, HDCodableMedicalCodingListList, HDCodableMedicalRecord, HDCodableStringList, HDCodableInspectableValueCollection, HDCodableMedicalCoding;

@interface HDCodableDiagnosticTestResult : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char referenceRangeStatus : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasDiagnosticTestCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *diagnosticTestCodingCollection;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HDCodableInspectableValueCollection *value;
@property (readonly, nonatomic) BOOL hasReferenceRanges;
@property (retain, nonatomic) HDCodableReferenceRangeList *referenceRanges;
@property (readonly, nonatomic) BOOL hasEffectiveStartDate;
@property (retain, nonatomic) NSData *effectiveStartDate;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) BOOL hasCategoriesCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *categoriesCodingCollections;
@property (readonly, nonatomic) BOOL hasIssueDate;
@property (retain, nonatomic) NSData *issueDate;
@property (readonly, nonatomic) BOOL hasEffectiveEndDate;
@property (retain, nonatomic) NSData *effectiveEndDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasInterpretationCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *interpretationCodingCollections;
@property (readonly, nonatomic) BOOL hasComments;
@property (retain, nonatomic) NSString *comments;
@property (readonly, nonatomic) BOOL hasBodySiteCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *bodySiteCodingCollection;
@property (readonly, nonatomic) BOOL hasMethodCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *methodCodingCollection;
@property (readonly, nonatomic) BOOL hasPerformers;
@property (retain, nonatomic) HDCodableStringList *performers;
@property (nonatomic) BOOL hasReferenceRangeStatus;
@property (nonatomic) long long referenceRangeStatus;

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
