@class NSUUID, NSDictionary, CMContinuityCaptureStreamFormat;

@interface CMContinuityCaptureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long entity;
@property (retain, nonatomic) NSUUID *sessionID;
@property unsigned long long generationID;
@property BOOL portraitEffectEnabled;
@property BOOL centerStageEnabled;
@property (retain) NSDictionary *centerStageRectOfInterest;
@property BOOL forceEnableCenterStage;
@property BOOL faceDetectionEnabled;
@property BOOL humanBodyDetectionEnabled;
@property BOOL studioLightingEnabled;
@property (retain) CMContinuityCaptureStreamFormat *format;
@property unsigned int maxFrameRate;
@property unsigned int minFrameRate;
@property double videoZoomFactor;
@property BOOL asyncStillCaptureEnabled;
@property (retain) NSDictionary *asyncStillCaptureConfigs;
@property (readonly) int maxPhotoQualityPrioritization;
@property (nonatomic) long long deskViewCameraMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
