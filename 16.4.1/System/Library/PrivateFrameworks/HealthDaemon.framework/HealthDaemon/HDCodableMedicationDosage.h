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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
