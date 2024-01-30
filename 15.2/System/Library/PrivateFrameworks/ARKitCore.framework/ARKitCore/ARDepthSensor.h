@class ARDepthSensorSettings, NSString, NSMutableDictionary, AVCapturePointCloudDataOutput;

@interface ARDepthSensor : ARImageSensor <AVCapturePointCloudDataOutputDelegate> {
    NSMutableDictionary *_extrinsicsMap;
}

@property (retain, nonatomic) AVCapturePointCloudDataOutput *pointCloudOutput;
@property (readonly, nonatomic) ARDepthSensorSettings *mutableDepthSettings;
@property (retain, nonatomic) NSString *projectorMode;
@property (readonly, copy, nonatomic) ARDepthSensorSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerSignPostForPointCloudData:(id)a0;

- (void)start;
- (void).cxx_destruct;
- (void)reconfigure:(id)a0;
- (void)stop;
- (void)pointCloudDataOutput:(id)a0 didOutputPointCloudData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3;
- (void)pointCloudDataOutput:(id)a0 didDropPointCloudData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 connection:(id)a3 reason:(long long)a4;
- (id)configureCaptureSession;
- (void)_configureProjectorModeForDevice:(id)a0;
- (BOOL)canReconfigure:(id)a0;
- (unsigned long long)providedDataTypes;
- (id)prepareToStart;

@end
