@interface CSXPCClientFactory : NSObject

+ (id)defaultFactory;

- (id)clientForAudioSessionInfoProviding;
- (id)clientForFallbackAudioSessionReleaseProviding;
- (id)clientForMacOSDuckAudioDevice;
- (id)clientForSmartSiriVolumeProviding;
- (id)clientForAudioProviding;

@end
