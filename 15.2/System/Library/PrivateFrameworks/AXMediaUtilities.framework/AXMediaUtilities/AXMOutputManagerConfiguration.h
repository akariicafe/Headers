@interface AXMOutputManagerConfiguration : NSObject

@property (nonatomic) unsigned long long components;
@property (nonatomic) BOOL usesPrivateAudioSession;
@property (nonatomic) BOOL hapticEngineUsesAutoShutdown;
@property (nonatomic) double hapticEngineAutoShutdownTimeout;
@property (nonatomic) BOOL hapticEngineUsesHapticsOnly;

- (id)description;

@end
