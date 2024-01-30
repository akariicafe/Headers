@class BWSensorConfiguration;

@interface BWPointCloudDensificationNodeConfiguration : NSObject

@property (readonly, nonatomic) BWSensorConfiguration *rgbSensorConfiguration;
@property (readonly, nonatomic) BWSensorConfiguration *timeOfFlightSensorConfiguration;
@property (readonly, nonatomic) int rgbCameraHorizontalSensorBinningFactor;
@property (readonly, nonatomic) int rgbCameraVerticalSensorBinningFactor;
@property (readonly, nonatomic) BOOL filteringEnabled;
@property (readonly, nonatomic) unsigned int depthPixelFormat;
@property (readonly, nonatomic) struct { int width; int height; } depthOutputDimensions;
@property (readonly, nonatomic) struct { int width; int height; } videoInputDimensions;

- (void)dealloc;
- (id)initWithRGBSensorConfiguration:(id)a0 timeOfFlightSensorConfiguration:(id)a1 rgbCameraHorizontalSensorBinningFactor:(int)a2 rgbCameraVerticalSensorBinningFactor:(int)a3 filteringEnabled:(BOOL)a4 depthPixelFormat:(unsigned int)a5 depthOutputDimensions:(struct { int x0; int x1; })a6 videoInputDimensions:(struct { int x0; int x1; })a7;

@end
