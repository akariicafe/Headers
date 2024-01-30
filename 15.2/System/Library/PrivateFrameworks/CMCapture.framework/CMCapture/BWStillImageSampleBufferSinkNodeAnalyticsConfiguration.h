@class NSArray;

@interface BWStillImageSampleBufferSinkNodeAnalyticsConfiguration : NSObject

@property (nonatomic) int formatDimensionWidth;
@property (nonatomic) int formatDimensionHeight;
@property (nonatomic) float formatMaxFrameRate;
@property (nonatomic) BOOL isHighQualityPhotoWithVideoFormatSupported;
@property (nonatomic) BOOL isPhotoFormat;
@property (nonatomic) BOOL isTimeLapse;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) BOOL binned;
@property (nonatomic) BOOL fastCapturePrioritizationEnabled;
@property (nonatomic) BOOL isSemanticStyleRenderingSupported;
@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;

- (void)dealloc;

@end
