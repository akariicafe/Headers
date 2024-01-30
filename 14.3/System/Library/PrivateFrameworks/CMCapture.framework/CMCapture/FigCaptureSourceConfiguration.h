@class NSString, NSDictionary, FigCaptureSourceVideoFormat, FigCaptureSourceDepthDataFormat;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying> {
    struct OpaqueFigCaptureSource { } *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
}

@property (readonly) BOOL smartCameraEnabled;
@property (readonly) BOOL bravoShiftMitigationEnabled;
@property (copy, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource { } *source;
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) float maxFrameRateClientOverride;
@property (nonatomic) float maxGainClientOverride;
@property (nonatomic) BOOL hasSetVideoZoomFactorOnCaptureSource;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration;
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration;
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (readonly, nonatomic) int sourceDeviceType;
@property (nonatomic) int imageControlMode;
@property (nonatomic) BOOL applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxExposureDurationClientOverride;
@property (nonatomic) BOOL sensorHDREnabled;
@property (nonatomic) BOOL highlightRecoveryEnabled;
@property (nonatomic) int colorSpace;
@property (nonatomic) BOOL depthDataDeliveryEnabled;
@property (nonatomic) float depthDataMaxFrameRate;
@property (retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat;
@property (nonatomic) BOOL lowLightVideoCaptureEnabled;
@property (nonatomic) BOOL variableFrameRateVideoCaptureEnabled;
@property (nonatomic) BOOL spatialOverCaptureEnabled;
@property (nonatomic) BOOL nonDestructiveCropEnabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForSourceDeviceType:(int)a0;
+ (int)sourceTypeForString:(id)a0;
+ (id)stringForSourcePosition:(int)a0;
+ (id)stringForSourceType:(int)a0;

- (id)initWithSourceType:(int)a0;
- (id)initWithXPCEncoding:(id)a0;
- (int)_sourceToken;
- (id)initWithSource:(struct OpaqueFigCaptureSource { } *)a0;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)_isMicSource;
- (id)_sourceUID;
- (BOOL)_isCameraSource;
- (BOOL)isEqual:(id)a0;
- (id)_sourceAttributes;

@end
