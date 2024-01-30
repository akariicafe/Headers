@class HKCodableMenstrualCyclesProjectionKind, HKCodableMenstrualCyclesProjection;

@interface HKCodableMenstrualCyclesProjectionHighlightTileViewModel : PBCodable <NSCopying> {
    struct { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProjection;
@property (retain, nonatomic) HKCodableMenstrualCyclesProjection *projection;
@property (readonly, nonatomic) BOOL hasProjectionKind;
@property (retain, nonatomic) HKCodableMenstrualCyclesProjectionKind *projectionKind;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

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
