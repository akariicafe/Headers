@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForAudioSessionInfoProviding;
- (id)clientForSmartSiriVolumeProviding;
- (id)clientForAudioProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForFallbackAudioSessionReleaseProviding;

@end
