@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, HDCodableStringList, NSData, HDCodableMedicalCodingListList, HDCodableMedicalRecord;

@interface HDCodableProcedureRecord : PBCodable <HDDecoding, NSCopying> {
    struct { unsigned char notPerformed : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasProcedureCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *procedureCodingCollection;
@property (readonly, nonatomic) BOOL hasPerformers;
@property (retain, nonatomic) HDCodableStringList *performers;
@property (readonly, nonatomic) BOOL hasExecutionStartDate;
@property (retain, nonatomic) NSData *executionStartDate;
@property (readonly, nonatomic) BOOL hasExecutionEndDate;
@property (retain, nonatomic) NSData *executionEndDate;
@property (nonatomic) BOOL hasNotPerformed;
@property (nonatomic) BOOL notPerformed;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasCategoryCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *categoryCodingCollection;
@property (readonly, nonatomic) BOOL hasReasonCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonCodingCollections;
@property (readonly, nonatomic) BOOL hasReasonsNotPerformedCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *reasonsNotPerformedCodingCollections;
@property (readonly, nonatomic) BOOL hasOutcomeCodingCollection;
@property (retain, nonatomic) HDCodableMedicalCodingList *outcomeCodingCollection;
@property (readonly, nonatomic) BOOL hasComplicationsCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *complicationsCodingCollections;
@property (readonly, nonatomic) BOOL hasFollowUpsCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *followUpsCodingCollections;
@property (readonly, nonatomic) BOOL hasBodySitesCodingCollections;
@property (retain, nonatomic) HDCodableMedicalCodingListList *bodySitesCodingCollections;

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
