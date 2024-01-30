@class HKCodableQuantity;

@interface HKCodableSummaryElectrocardiogramValue : PBCodable <NSCopying> {
    struct { unsigned char algorithmVersionRawValue : 1; unsigned char classificationRawValue : 1; unsigned char timestampData : 1; } _has;
}

@property (nonatomic) BOOL hasAlgorithmVersionRawValue;
@property (nonatomic) long long algorithmVersionRawValue;
@property (nonatomic) BOOL hasClassificationRawValue;
@property (nonatomic) long long classificationRawValue;
@property (readonly, nonatomic) BOOL hasAverageHeartRate;
@property (retain, nonatomic) HKCodableQuantity *averageHeartRate;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;

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
