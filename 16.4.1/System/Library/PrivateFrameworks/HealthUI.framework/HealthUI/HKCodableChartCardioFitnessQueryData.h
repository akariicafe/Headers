@class HKCodableChartQuantityDataSourceQueryData;

@interface HKCodableChartCardioFitnessQueryData : PBCodable <NSCopying> {
    struct APPLE_149 { unsigned char age : 1; unsigned char biologicalSex : 1; unsigned char cardioFitnessLevelEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasCardioFitnessLevelEnabled;
@property (nonatomic) long long cardioFitnessLevelEnabled;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) long long age;
@property (readonly, nonatomic) BOOL hasQuantityData;
@property (retain, nonatomic) HKCodableChartQuantityDataSourceQueryData *quantityData;

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
