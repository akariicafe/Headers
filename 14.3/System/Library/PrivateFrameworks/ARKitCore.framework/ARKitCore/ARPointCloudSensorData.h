@class NSString, ADJasperPointCloud, AVPointCloudData;

@interface ARPointCloudSensorData : NSObject <NSSecureCoding, ARSensorData> {
    AVPointCloudData *_pointCloudData;
    long long _projectorMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timestamp;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } visionCameraTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransform;
@property (readonly, nonatomic) ADJasperPointCloud *pointCloud;
@property (readonly, nonatomic) long long cameraPosition;
@property (readonly, nonatomic) NSString *cameraType;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicsToWideSensor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)pointCloudData;
- (id)initWithCoder:(id)a0;
- (long long)projectorMode;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPointCloudData:(id)a0 captureFramePerSecond:(long long)a1 captureDevice:(id)a2 captureSession:(id)a3;
- (id)initWithPointCloudData:(id)a0 projectorMode:(long long)a1 timestamp:(double)a2;

@end
