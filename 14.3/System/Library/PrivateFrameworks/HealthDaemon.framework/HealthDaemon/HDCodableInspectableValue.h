@class HDCodableMedicalCodingList, NSString, HDCodableRatioValue, HDCodableCodedValueCollection, HDCodableMedicalDate, HDCodableCodedQuantity, HDCodableDateComponents, HDCodableMedicalDateInterval;

@interface HDCodableInspectableValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasRatioValue;
@property (retain, nonatomic) HDCodableRatioValue *ratioValue;
@property (readonly, nonatomic) BOOL hasDateComponentsValue;
@property (retain, nonatomic) HDCodableDateComponents *dateComponentsValue;
@property (readonly, nonatomic) BOOL hasCodedQuantityValue;
@property (retain, nonatomic) HDCodableCodedQuantity *codedQuantityValue;
@property (readonly, nonatomic) BOOL hasMedicalCodingValue;
@property (retain, nonatomic) HDCodableMedicalCodingList *medicalCodingValue;
@property (readonly, nonatomic) BOOL hasCodedValueCollection;
@property (retain, nonatomic) HDCodableCodedValueCollection *codedValueCollection;
@property (readonly, nonatomic) BOOL hasMedicalDateValue;
@property (retain, nonatomic) HDCodableMedicalDate *medicalDateValue;
@property (readonly, nonatomic) BOOL hasMedicalDateIntervalValue;
@property (retain, nonatomic) HDCodableMedicalDateInterval *medicalDateIntervalValue;
@property (readonly, nonatomic) BOOL hasDataAbsentReasonCodingsValue;
@property (retain, nonatomic) HDCodableMedicalCodingList *dataAbsentReasonCodingsValue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
