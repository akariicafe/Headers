@interface AROrientationTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;

+ (id)supportedVideoFormats;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)recommendedVideoFormatFor4KResolution;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)new;
+ (id)_querySupportedVideoFormats;

- (id)init;
- (id)description;

@end
