@class NSString, NSDate;

@interface BWMemoryAnalyticsPayload : NSObject <BWCoreAnalyticsPayload> {
    int _buttonMashRate0Counter;
    NSDate *_creationTime;
    BOOL _captureDevicePositionFront;
    BOOL _captureDevicePositionBack;
    BOOL _captureDeviceTypeBravo;
    BOOL _captureDeviceTypeLiDAR;
    BOOL _captureDeviceTypeOther;
    BOOL _captureDeviceTypePearl;
    BOOL _captureDeviceTypeSuperBravo;
    BOOL _captureDeviceTypeWideBravo;
    BOOL _capturePortTypeBackSuperWide;
    BOOL _capturePortTypeBackTelephoto;
    BOOL _capturePortTypeOther;
    BOOL _capturePortTypeBack;
    BOOL _captureResolutionDefault;
    BOOL _captureResolutionEnhanced;
    BOOL _captureResolutionUltraHigh;
    BOOL _captureTypeUB;
    BOOL _captureTypeDeepFusion;
    BOOL _captureTypeDigitalFlash;
    BOOL _captureTypeOther;
    BOOL _captureTypeWYSIWYG;
    unsigned int _maxButtonMashCount;
    unsigned int _captureCount;
}

@property (nonatomic) BOOL burst;
@property (nonatomic) BOOL clientIsCameraOrDerivative;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) int deviceType;
@property (nonatomic) BOOL graphHasVideoDataOutput;
@property (nonatomic) BOOL graphContainsMovieFilePipeline;
@property (nonatomic) BOOL graphContainsDepthDataPipeline;
@property (nonatomic) BOOL greenGhostMitigation;
@property (nonatomic) BOOL scaledStillCaptureTaken;
@property (nonatomic) BOOL intelligentDistortionCorrection;
@property (nonatomic) BOOL livePhoto;
@property (nonatomic) BOOL proRaw;
@property (nonatomic) BOOL proRawPlusProcessedPhotoEncoding;
@property (nonatomic) BOOL quickTakeVideo;
@property (nonatomic) unsigned long long peakFootprintDifference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventName;
- (id)eventDictionary;
- (void)dealloc;
- (id)init;
- (void)reset;
- (void)addCaptureType:(int)a0;
- (void)addDeviceType:(int)a0;
- (void)addHighResolutionFlavor:(int)a0;
- (void)addPortType:(id)a0;
- (void)updateButtonMash:(BOOL)a0;

@end
