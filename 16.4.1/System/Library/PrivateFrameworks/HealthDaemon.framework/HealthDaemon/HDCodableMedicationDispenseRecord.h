@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, HDCodableCodedQuantity, NSData, HDCodableMedicationDosageList, HDCodableMedicalRecord;

@interface HDCodableMedicationDispenseRecord : PBCodable <HDDecoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMedicalRecord;
@property (retain, nonatomic) HDCodableMedicalRecord *medicalRecord;
@property (readonly, nonatomic) BOOL hasMedicationCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *medicationCodings;
@property (readonly, nonatomic) BOOL hasQuantityDispensed;
@property (retain, nonatomic) HDCodableCodedQuantity *quantityDispensed;
@property (readonly, nonatomic) BOOL hasPreparationDate;
@property (retain, nonatomic) NSData *preparationDate;
@property (readonly, nonatomic) BOOL hasHandOverDate;
@property (retain, nonatomic) NSData *handOverDate;
@property (readonly, nonatomic) BOOL hasDosages;
@property (retain, nonatomic) HDCodableMedicationDosageList *dosages;
@property (readonly, nonatomic) BOOL hasEarliestDosageDate;
@property (retain, nonatomic) NSData *earliestDosageDate;
@property (readonly, nonatomic) BOOL hasStatusCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *statusCoding;
@property (readonly, nonatomic) BOOL hasDaysSupplyQuantity;
@property (retain, nonatomic) HDCodableCodedQuantity *daysSupplyQuantity;

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
