@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char magneticAccuracy : 1; unsigned char magneticCalibration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasQuaternion;
@property (retain, nonatomic) CLPQuaternion *quaternion;
@property (nonatomic) BOOL hasMagneticAccuracy;
@property (nonatomic) float magneticAccuracy;
@property (nonatomic) BOOL hasMagneticCalibration;
@property (nonatomic) int magneticCalibration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsMagneticCalibration:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)magneticCalibrationAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
