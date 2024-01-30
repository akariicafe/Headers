@class NSDictionary, AVAudioSession, NSSet;

@interface VCAudioSessionAVAS : VCAudioSession {
    AVAudioSession *_avAudioSession;
    NSDictionary *_cmSessionToAVAudioSessionMapping;
    NSSet *_genericSessionProperties;
}

- (BOOL)hasStarted;
- (id)initWithMode:(int)a0;
- (void)dealloc;
- (BOOL)stopSession;
- (BOOL)startInternal;
- (BOOL)setSampleRate:(double)a0;
- (void)handleAudioSessionInterruption:(id)a0;
- (BOOL)applyAudioSessionMediaProperties:(id)a0;
- (void)applyAudioSessionMediaPropertiesForSystemAudio;
- (void)applyAudioSessionProperties;
- (void)applyClientPid;
- (BOOL)applyRequestedProperty:(id)a0 defaultValue:(void *)a1;
- (unsigned long long)avAudioSessionAllowedRouteTypesFromCMSession:(id)a0;
- (id)avAudioSessionKeyFromCMSessionKey:(id)a0;
- (void)destroyAudioSession;
- (void)handleAudioSessionAvailableSampleRateChange:(id)a0;
- (void)handleAudioSessionMediaServicesWereLostNotification:(id)a0;
- (void)handleAudioSessionMediaServicesWereResetNotification:(id)a0;
- (void)handleSecureMicNotificationWithInterruptionInfo:(id)a0;
- (BOOL)internalSelectMicrophoneWithType:(unsigned int)a0;
- (void)resetOverrideRoute;
- (void)setBlockSize:(double)a0 sampleRate:(double)a1 force:(BOOL)a2;
- (BOOL)setSessionProperty:(id)a0 value:(id)a1;
- (void)setSpeakerProperty:(id)a0;
- (void)setVPBlockConfigurationProperties:(id)a0;
- (void)setupInputBeamforming;
- (void)setupSharePlayWithVPOperatingMode:(unsigned int)a0;
- (BOOL)startSessionWithMediaProperties:(id)a0 sessionRef:(unsigned int *)a1;

@end
