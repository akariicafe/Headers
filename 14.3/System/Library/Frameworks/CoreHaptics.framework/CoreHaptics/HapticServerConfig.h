@interface HapticServerConfig : NSObject

@property (readonly) BOOL usingInternalHaptics;
@property (readonly) BOOL supportsAudioPlayback;
@property (readonly) BOOL supportsAdvancedPatternPlayers;
@property (readonly) float hapticContinuousTimeLimit;

- (id)initWithHapticPlayer:(id)a0 error:(id *)a1;

@end
