@interface AROrientationTrackingConfiguration : ARConfiguration

@property (nonatomic, getter=isAutoFocusEnabled) BOOL autoFocusEnabled;

+ (id)new;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;
+ (id)_querySupportedVideoFormats;

- (id)description;
- (id)init;

@end
