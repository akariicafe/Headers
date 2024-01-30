@interface CLPBaroCalibrationIndication : PBCodable <NSCopying> {
    struct { unsigned char isCalibratedBarometricAlt : 1; unsigned char isMapMatched : 1; unsigned char isOutdoorContext : 1; } _has;
}

@property (nonatomic) BOOL hasIsCalibratedBarometricAlt;
@property (nonatomic) BOOL isCalibratedBarometricAlt;
@property (nonatomic) BOOL hasIsMapMatched;
@property (nonatomic) BOOL isMapMatched;
@property (nonatomic) BOOL hasIsOutdoorContext;
@property (nonatomic) BOOL isOutdoorContext;

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
