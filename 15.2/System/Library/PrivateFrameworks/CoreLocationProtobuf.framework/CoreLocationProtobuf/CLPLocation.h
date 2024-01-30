@class CLPMotionActivity, CLPPipelineDiagnosticReport, CLPSatelliteReport, NSMutableArray, CLPBaroCalibrationIndication;

@interface CLPLocation : PBCodable <NSCopying> {
    struct { unsigned char altitude : 1; unsigned char context : 1; unsigned char course : 1; unsigned char courseAccuracy : 1; unsigned char floor : 1; unsigned char horzUncSemiMaj : 1; unsigned char horzUncSemiMajAz : 1; unsigned char horzUncSemiMin : 1; unsigned char modeIndicator : 1; unsigned char motionActivityConfidence : 1; unsigned char motionActivityType : 1; unsigned char provider : 1; unsigned char speed : 1; unsigned char speedAccuracy : 1; unsigned char verticalAccuracy : 1; unsigned char isFromLocationController : 1; unsigned char motionVehicleConnected : 1; unsigned char motionVehicleConnectedStateChanged : 1; } _has;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) float horizontalAccuracy;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) float altitude;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) float verticalAccuracy;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) float speed;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) float course;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) int context;
@property (nonatomic) BOOL hasMotionActivityType;
@property (nonatomic) int motionActivityType;
@property (nonatomic) BOOL hasMotionActivityConfidence;
@property (nonatomic) int motionActivityConfidence;
@property (nonatomic) BOOL hasProvider;
@property (nonatomic) int provider;
@property (nonatomic) BOOL hasFloor;
@property (nonatomic) int floor;
@property (retain, nonatomic) NSMutableArray *appBundleIdIndices;
@property (nonatomic) BOOL hasMotionVehicleConnectedStateChanged;
@property (nonatomic) BOOL motionVehicleConnectedStateChanged;
@property (nonatomic) BOOL hasMotionVehicleConnected;
@property (nonatomic) BOOL motionVehicleConnected;
@property (readonly, nonatomic) BOOL hasRawMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *rawMotionActivity;
@property (readonly, nonatomic) BOOL hasMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *motionActivity;
@property (readonly, nonatomic) BOOL hasDominantMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *dominantMotionActivity;
@property (nonatomic) BOOL hasCourseAccuracy;
@property (nonatomic) float courseAccuracy;
@property (nonatomic) BOOL hasSpeedAccuracy;
@property (nonatomic) float speedAccuracy;
@property (nonatomic) BOOL hasModeIndicator;
@property (nonatomic) int modeIndicator;
@property (nonatomic) BOOL hasHorzUncSemiMaj;
@property (nonatomic) float horzUncSemiMaj;
@property (nonatomic) BOOL hasHorzUncSemiMin;
@property (nonatomic) float horzUncSemiMin;
@property (nonatomic) BOOL hasHorzUncSemiMajAz;
@property (nonatomic) float horzUncSemiMajAz;
@property (readonly, nonatomic) BOOL hasSatReport;
@property (retain, nonatomic) CLPSatelliteReport *satReport;
@property (nonatomic) BOOL hasIsFromLocationController;
@property (nonatomic) BOOL isFromLocationController;
@property (readonly, nonatomic) BOOL hasPipelineDiagnosticReport;
@property (retain, nonatomic) CLPPipelineDiagnosticReport *pipelineDiagnosticReport;
@property (readonly, nonatomic) BOOL hasBaroCalibrationIndication;
@property (retain, nonatomic) CLPBaroCalibrationIndication *baroCalibrationIndication;

+ (Class)appBundleIdIndicesType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearAppBundleIdIndices;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addAppBundleIdIndices:(id)a0;
- (unsigned long long)appBundleIdIndicesCount;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)a0;
- (id)modeIndicatorAsString:(int)a0;
- (int)StringAsModeIndicator:(id)a0;

@end
