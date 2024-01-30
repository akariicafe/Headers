@class JDJasperModuleCalibrationData, JDMutableCameraCalibrationData, JDCameraCalibrationData;

@interface JDJasperCameraSystemCalibrationData : NSObject

@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) int jasperChipRevision;
@property (readonly, nonatomic) JDMutableCameraCalibrationData *jasperCamera;
@property (readonly, nonatomic) JDCameraCalibrationData *fullSensorSuperWideCamera;
@property (readonly, nonatomic) JDJasperModuleCalibrationData *jasperModule;

+ (id)calibrationDataWithJasperCalibDataDictionary:(id)a0;
+ (id)calibrationDataWithJasperCalib:(id)a0 platformId:(int)a1 sensorVersion:(int)a2;

- (void).cxx_destruct;
- (id)initWithJasperModuleCalibration:(id)a0 platformId:(int)a1 sensorVersion:(int)a2;
- (id)getSuperWideCameraCalibrationForRawSensorSize:(struct CGSize { double x0; double x1; })a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scaledTo:(struct CGSize { double x0; double x1; })a2;
- (void)replaceJasperDistortionModelWithWarperMesh:(id)a0 width:(long long)a1 height:(long long)a2;

@end
