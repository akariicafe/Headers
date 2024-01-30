@class NSString, HDCodableMedicalCoding, HDCodableMedicalDateInterval;

@interface HDCodableMedicationDosage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasInstruction;
@property (retain, nonatomic) NSString *instruction;
@property (readonly, nonatomic) BOOL hasTimingPeriod;
@property (retain, nonatomic) HDCodableMedicalDateInterval *timingPeriod;
@property (readonly, nonatomic) BOOL hasSiteCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *siteCoding;
@property (readonly, nonatomic) BOOL hasRouteCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *routeCoding;
@property (readonly, nonatomic) BOOL hasMethodCoding;
@property (retain, nonatomic) HDCodableMedicalCoding *methodCoding;

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
