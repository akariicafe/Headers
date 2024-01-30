@interface HDAWDHealthKitUserCharacteristics : PBCodable <NSCopying> {
    struct { unsigned char ageYears : 1; unsigned char biologicalSex : 1; unsigned char heightCm : 1; unsigned char weightKg : 1; } _has;
}

@property (nonatomic) BOOL hasWeightKg;
@property (nonatomic) long long weightKg;
@property (nonatomic) BOOL hasHeightCm;
@property (nonatomic) long long heightCm;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) BOOL hasAgeYears;
@property (nonatomic) long long ageYears;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
