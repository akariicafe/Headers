@class NSDate, NSString, AVDepthData, NSMutableDictionary, AVCameraCalibrationData, ARPointCloud, ARFaceData, ADCameraCalibration;

@interface ARImageData : NSObject <ARDictionaryCoding, ARSensorData, NSCopying, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *extrinsicsMap;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDate *captureDate;
@property (nonatomic) double currentCaptureTimestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } cameraIntrinsics;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic, getter=isMirrored) BOOL mirrored;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) unsigned long long lensType;
@property (nonatomic) void /* unknown type, empty encoding */ radialDistortion;
@property (nonatomic) void /* unknown type, empty encoding */ tangentialDistortion;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureTargetOffset;
@property (nonatomic) float temperature;
@property (nonatomic) float signalToNoiseRatio;
@property (nonatomic) float ISO;
@property (nonatomic) long long deviceOrientation;
@property (retain, nonatomic) ARFaceData *faceData;
@property (retain, nonatomic) AVDepthData *depthData;
@property (retain, nonatomic) ARPointCloud *pointCloud;
@property (nonatomic) double depthDataTimestamp;
@property (nonatomic) struct __CVBuffer { } *visionData;
@property (nonatomic) long long cameraPosition;
@property (retain, nonatomic) NSString *cameraType;
@property (retain, nonatomic) AVCameraCalibrationData *calibrationData;
@property (retain, nonatomic) ADCameraCalibration *adCameraCalibration;
@property (nonatomic) long long captureFramesPerSecond;
@property (readonly, nonatomic) ARImageData *originalImage;
@property (nonatomic, getter=isSecondary) BOOL secondary;
@property (retain, nonatomic) ARImageData *latestUltraWideImage;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionTransform;
@property (nonatomic) double timestampOfSynchronizedWideImageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captureDateFromPresentationTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 session:(id)a1;

- (id)debugQuickLookObject;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithImageData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 captureFramePerSecond:(long long)a1 captureDevice:(id)a2 captureSession:(id)a3;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 captureFramePerSecond:(long long)a1 captureDevice:(id)a2 captureSession:(id)a3 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 intrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a5 exif:(id)a6;
- (BOOL)matchesPixelBufferPointerRecursively:(void *)a0;
- (id)encodeToDictionary;
- (struct { void /* unknown type, empty encoding */ x0[4]; })extrinsicMatrixToDeviceType:(id)a0;
- (void)addExtrinsicMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 toDeviceType:(id)a1;

@end
