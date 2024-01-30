@class HKCodableQuantity, NSMutableArray;

@interface HKCodableSummaryAudiogramValue : PBCodable <NSCopying> {
    struct APPLE_182 { unsigned char diagnostic : 1; unsigned char timestampData : 1; } _has;
}

@property (nonatomic) BOOL hasDiagnostic;
@property (nonatomic) long long diagnostic;
@property (readonly, nonatomic) BOOL hasAverageLeftEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *averageLeftEarSensitivity;
@property (readonly, nonatomic) BOOL hasAverageRightEarSensitivity;
@property (retain, nonatomic) HKCodableQuantity *averageRightEarSensitivity;
@property (readonly, nonatomic) BOOL hasMinimumSensitivity;
@property (retain, nonatomic) HKCodableQuantity *minimumSensitivity;
@property (readonly, nonatomic) BOOL hasMaximumSensitivity;
@property (retain, nonatomic) HKCodableQuantity *maximumSensitivity;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;
@property (retain, nonatomic) NSMutableArray *sensitivityPoints;

+ (Class)sensitivityPointsType;

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
- (void)addSensitivityPoints:(id)a0;
- (void)clearSensitivityPoints;
- (id)sensitivityPointsAtIndex:(unsigned long long)a0;
- (unsigned long long)sensitivityPointsCount;

@end
