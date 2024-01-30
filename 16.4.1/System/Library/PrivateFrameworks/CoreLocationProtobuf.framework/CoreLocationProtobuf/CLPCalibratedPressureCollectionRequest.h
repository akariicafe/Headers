@class CLPMotionActivity, CLPBaroCalibrationIndication;

@interface CLPCalibratedPressureCollectionRequest : PBRequest <NSCopying> {
    struct { unsigned char latitudeDeg : 1; unsigned char longitudeDeg : 1; unsigned char timeSinceLastSignificantLocationVisitExitS : 1; unsigned char timestampOfCalibrationS : 1; unsigned char altitudeHAEM : 1; unsigned char altitudeHAEUncM : 1; unsigned char calibratedPressurePa : 1; unsigned char calibratedPressureUncPa : 1; unsigned char devicePressurePa : 1; unsigned char devicePressureUncPa : 1; unsigned char horizontalUncM : 1; unsigned char quantizedDistChangeSinceLastCalibrationM : 1; unsigned char quantizedTimeChangeSinceLastCalibrationS : 1; unsigned char referenceAltM : 1; unsigned char referenceAltUncM : 1; unsigned char reliability : 1; unsigned char speedMps : 1; unsigned char speedUncMps : 1; } _has;
}

@property (nonatomic) BOOL hasDevicePressurePa;
@property (nonatomic) float devicePressurePa;
@property (nonatomic) BOOL hasDevicePressureUncPa;
@property (nonatomic) float devicePressureUncPa;
@property (nonatomic) BOOL hasCalibratedPressurePa;
@property (nonatomic) float calibratedPressurePa;
@property (nonatomic) BOOL hasCalibratedPressureUncPa;
@property (nonatomic) float calibratedPressureUncPa;
@property (nonatomic) BOOL hasTimestampOfCalibrationS;
@property (nonatomic) double timestampOfCalibrationS;
@property (nonatomic) BOOL hasLatitudeDeg;
@property (nonatomic) double latitudeDeg;
@property (nonatomic) BOOL hasLongitudeDeg;
@property (nonatomic) double longitudeDeg;
@property (nonatomic) BOOL hasHorizontalUncM;
@property (nonatomic) float horizontalUncM;
@property (nonatomic) BOOL hasAltitudeHAEM;
@property (nonatomic) float altitudeHAEM;
@property (nonatomic) BOOL hasAltitudeHAEUncM;
@property (nonatomic) float altitudeHAEUncM;
@property (nonatomic) BOOL hasSpeedMps;
@property (nonatomic) float speedMps;
@property (nonatomic) BOOL hasSpeedUncMps;
@property (nonatomic) float speedUncMps;
@property (nonatomic) BOOL hasReferenceAltM;
@property (nonatomic) float referenceAltM;
@property (nonatomic) BOOL hasReferenceAltUncM;
@property (nonatomic) float referenceAltUncM;
@property (nonatomic) BOOL hasTimeSinceLastSignificantLocationVisitExitS;
@property (nonatomic) double timeSinceLastSignificantLocationVisitExitS;
@property (readonly, nonatomic) BOOL hasActivity;
@property (retain, nonatomic) CLPMotionActivity *activity;
@property (nonatomic) BOOL hasReliability;
@property (nonatomic) int reliability;
@property (readonly, nonatomic) BOOL hasCalibration;
@property (retain, nonatomic) CLPBaroCalibrationIndication *calibration;
@property (nonatomic) BOOL hasQuantizedDistChangeSinceLastCalibrationM;
@property (nonatomic) int quantizedDistChangeSinceLastCalibrationM;
@property (nonatomic) BOOL hasQuantizedTimeChangeSinceLastCalibrationS;
@property (nonatomic) int quantizedTimeChangeSinceLastCalibrationS;

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
- (int)StringAsReliability:(id)a0;
- (id)reliabilityAsString:(int)a0;

@end
