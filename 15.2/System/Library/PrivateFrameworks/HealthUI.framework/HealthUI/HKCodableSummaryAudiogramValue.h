@class HKCodableQuantity, NSMutableArray;

@interface HKCodableSummaryAudiogramValue : PBCodable <NSCopying> {
    struct { unsigned char diagnostic : 1; unsigned char timestampData : 1; } _has;
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
- (void)addSensitivityPoints:(id)a0;
- (unsigned long long)sensitivityPointsCount;
- (void)clearSensitivityPoints;
- (id)sensitivityPointsAtIndex:(unsigned long long)a0;

@end
