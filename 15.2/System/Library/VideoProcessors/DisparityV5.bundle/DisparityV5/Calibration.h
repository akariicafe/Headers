@class NSDictionary, NSString;

@interface Calibration : NSObject {
    struct AdaptiveCorrection { } *_adc;
    struct { int width; int height; } _pixelBufferDimensions[2];
    NSDictionary *_metadata[2];
    struct DistortionModel { double pixelSizeMM; double focalLengthPix; double opticalCenterX; double opticalCenterY; double polyBase[8]; double polyDynamic[8]; } _distModels[2];
    struct DistortionModel { double pixelSizeMM; double focalLengthPix; double opticalCenterX; double opticalCenterY; double polyBase[8]; double polyDynamic[8]; } _undistModels[2];
    unsigned int _keypointsCount;
    double *_adaptiveCorrectionKeypointsDistorted[2];
    NSDictionary *_staticParametersByPortType;
    struct AdaptiveCorrectionConfig { double epErrorLimitWidePix_FirstPass; double epErrorLimitWidePix_SecondPass; double rangePFL_T; double rangePFL_W; double rangeOCxT; double rangeOCxW; double rangeOCyW; double intermediateMacroDistMM; double extremeMacroDistMM; int minPointsForAdjustment; double errorVal_GreaterThanInf; double errorVal_LessThanExtremeMacro; double errorVal_BetweenIntermediate_ExtremeMacro; BOOL runAnalyticalPreconditioning; double spgEpsilon; float temporalFilteringStrength; float temporalFilteringStrengthParallel; } _adaptiveCorrectionConfig;
    float _focalLength[2];
    struct CGPoint { double x; double y; } _opticalCenter[2];
    struct CGSize { double width; double height; } _rawSensorSize[2];
    float _ddf[2];
    struct CGPoint { double x; double y; } _distortionOpticalCenter[2];
    NSString *_portTypeName[2];
    void /* unknown type, empty encoding */ _limitDistances_mm;
    float _rectificationAngleStep;
    struct { double *xyPointsTeleTransposed; double *xyPointsWideTransposed; } _transposedKeypoints;
}

@property (readonly, nonatomic) float referenceMagnification;
@property (readonly, nonatomic) struct CalModel { double focalLengthPix[2]; double opticalCenterX[2]; double opticalCenterY[2]; double extrinRotRefefenceToAuxiliary[12]; } initialCalibration;
@property (readonly, nonatomic) struct CalModel { double focalLengthPix[2]; double opticalCenterX[2]; double opticalCenterY[2]; double extrinRotRefefenceToAuxiliary[12]; } correctedCalibration;
@property (nonatomic) void /* unknown type, empty encoding */ orientationVector;
@property (nonatomic) BOOL distortionCorrectionEnabled;
@property (readonly, nonatomic) float nearLimitDisparity;
@property (readonly, nonatomic) float midLimitDisparity;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } auxiliaryPaddingHInv;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } rectReferenceToReference;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } rectReferenceToAuxiliary;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } referenceToRectReference;

- (void)releaseResources;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)_allocateResourcesForMaxNumOfTransposedPoints:(unsigned int)a0;
- (void)_releaseResourcesForTransformedPoints;
- (int)_computeCalibrationWithoutDistortion;
- (BOOL)_computeAdcDistortionModels;
- (int)computeStereoRectificationHomographies:(SEL)a0 alignedToAngle:(float)a1;
- (int)_computeCenteredRectificationHomographies;
- (int)_computePaddedAuxiliaryRectificationHomography;
- (int)allocateResourcesForMaxNumPoints:(unsigned int)a0;
- (int)extractParametersFromOptions:(id)a0 adaptiveCorrectionConfig:(struct AdaptiveCorrectionConfig { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; int x9; double x10; double x11; double x12; BOOL x13; double x14; float x15; float x16; })a1;
- (int)extractParametersFromReferenceMetadata:(id)a0 auxiliaryMetadata:(id)a1 useReferenceFrame:(BOOL)a2;
- (int)computeInitialCalibration;
- (int)computeCalibration;
- (void)setKeypointsForReference:(double *)a0 auxiliary:(double *)a1 keypointCount:(unsigned int)a2;
- (struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; })distModelFor:(int)a0;
- (struct DistortionModel { double x0; double x1; double x2; double x3; double x4[8]; double x5[8]; })undistModelFor:(int)a0;
- (void)setBufferDimensions:(struct { int x0; int x1; })a0 forBufferType:(int)a1;
- (int)computeStereoRectificationHomographies:(SEL)a0;

@end
