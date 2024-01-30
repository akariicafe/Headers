@class NSString, HDCodableMedicalDateInterval;

@interface HDCodableMedicationDosage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasInstruction;
@property (retain, nonatomic) NSString *instruction;
@property (readonly, nonatomic) BOOL hasTimingPeriod;
@property (retain, nonatomic) HDCodableMedicalDateInterval *timingPeriod;

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
