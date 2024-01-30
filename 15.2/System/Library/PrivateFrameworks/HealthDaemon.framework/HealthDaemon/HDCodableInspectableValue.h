@class HDCodableMedicalCodingList, NSString, HDCodableRatioValue, HDCodableCodedValueCollection, HDCodableMedicalDate, HDCodableCodedQuantity, HDCodableDateComponents, HDCodableMedicalDateInterval;

@interface HDCodableInspectableValue : PBCodable <NSCopying> {
    struct { unsigned char inspectableIntegerValue : 1; unsigned char booleanValue : 1; } _has;
}

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
@property (nonatomic) BOOL hasInspectableIntegerValue;
@property (nonatomic) long long inspectableIntegerValue;
@property (nonatomic) BOOL hasBooleanValue;
@property (nonatomic) BOOL booleanValue;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
