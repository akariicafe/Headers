@class JasperPointCloudUtils, NSString, JDJasperCameraSystemCalibrationData, JDCloudColorCalibrationController, DNNEngine;

@interface JDCloudColorCalibration : NSObject

@property (retain, nonatomic) JasperPointCloudUtils *jasperPointCloudUtils;
@property (retain, nonatomic) DNNEngine *DNNEngine;
@property (retain, nonatomic) JDCloudColorCalibrationController *controller;
@property (nonatomic) unsigned int *featureVectorDim;
@property (nonatomic) unsigned int featureVectorSize;
@property (nonatomic) unsigned int numInputAggregated;
@property (nonatomic) unsigned int aggregationCounter;
@property (nonatomic) float *backendResultAggregated;
@property (retain, nonatomic) NSString *currentSessionDirPath;
@property (nonatomic) float alphaCorrectionFactor;
@property (nonatomic) struct { float backendRunTimeMinMsec; float backendRunTimeMaxMsec; float backendRunTimeAvgMsec; float backendRunTimeTotalMsec; float frontendRunTimeTotalMsec; unsigned int numJasperPointsTotal; float numJasperPointsAvg; unsigned int numOfFrames; } analytics;
@property (retain, nonatomic) JDJasperCameraSystemCalibrationData *calib;
@property (nonatomic) struct CGSize { double width; double height; } backendNetworkInputDimensions;
@property (nonatomic) unsigned int backendNetworkInputPixelFormat;
@property (nonatomic) BOOL debugOutputEnabled;
@property (nonatomic) BOOL isMemoryDumpEnable;

- (id)init:(unsigned int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)setInternalState:(id)a0;
- (void)resetSession;
- (unsigned long long)gcd:(unsigned long long)a0 and:(unsigned long long)a1;
- (id)dateAndTimeString;
- (void)memoryDumpImage:(struct __CVBuffer { } *)a0 withNameExtension:(id)a1;
- (void)memoryDumpJasper:(id)a0;
- (void)memoryDumpResultOutcome:(id)a0;
- (void)memoryDumpBinary:(char *)a0 sizeInBytes:(unsigned int)a1 withNameExtension:(id)a2;
- (id)initWithSystemCalibrationData:(id)a0 aggregationSize:(int)a1;
- (BOOL)runController:(struct __CVBuffer { } *)a0 jdpc:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateJasperFOVInImageWithJasperCalibration:(id)a0 withCameraCalibration:(id)a1 withOriginalImageWidth:(unsigned long long)a2 withOriginalImageHeight:(unsigned long long)a3 forOutputImageWidth:(unsigned long long)a4 forOutputImageHeight:(unsigned long long)a5;
- (int)createPreprocessed:(struct __CVBuffer { } *)a0 andJDPC:(id)a1 outputRGB:(struct __CVBuffer **)a2 outputPC:(float **)a3 outputPCSize:(unsigned int *)a4;
- (int)createPreprocessed:(struct __CVBuffer { } *)a0 andJDPC:(id)a1 cropWidth:(unsigned long long)a2 cropHeight:(unsigned long long)a3 scale:(double)a4 outputRGB:(struct __CVBuffer **)a5 outputPC:(float **)a6 outputPCSize:(unsigned int *)a7;
- (int)runRGBJNet:(struct __CVBuffer { } *)a0 pointCloud:(float *)a1 pointCloudSize:(unsigned int)a2 resultOutcome:(id *)a3 poolLogic:(BOOL)a4 analyticsData:(id *)a5;
- (int)runRGBJNet:(struct __CVBuffer { } *)a0 pointCloud:(float *)a1 pointCloudSize:(unsigned int)a2 result:(struct JDCloudColorCalibrationResult { int x0; float x1; float x2; float x3; } *)a3 poolLogic:(BOOL)a4 analyticsData:(id *)a5;
- (int)runRGBJNet:(struct __CVBuffer { } *)a0 pointCloud:(float *)a1 pointCloudSize:(unsigned int)a2 resultOutcome:(id *)a3 analyticsData:(id *)a4;
- (id)calibratePointCloud:(id)a0 andImage:(struct __CVBuffer { } *)a1 analyticsData:(id *)a2 debugInfo:(id *)a3;
- (id)getInternalState;
- (BOOL)isCloudColorCalibrationInDebug;
- (void)rgbj_calibration_log:(id)a0 isErrorMessage:(BOOL)a1;

@end
