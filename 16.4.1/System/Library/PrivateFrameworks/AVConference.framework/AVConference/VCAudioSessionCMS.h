@interface VCAudioSessionCMS : VCAudioSession

@property (readonly, nonatomic) struct opaqueCMSession { } *cmSession;

- (BOOL)hasStarted;
- (BOOL)stopSession;
- (BOOL)startInternal;
- (BOOL)setSampleRate:(double)a0;
- (void)didEndQuietTime;
- (BOOL)applyAudioSessionMediaProperties:(id)a0;
- (void)applyAudioSessionMediaPropertiesForSystemAudio;
- (void)applyAudioSessionPropertiesWithVPOperatingMode:(unsigned int)a0;
- (void)applyClientPid;
- (BOOL)applyRequestedProperty:(id)a0 defaultValue:(void *)a1;
- (void)didBeginQuietTime;
- (void)handleAudioInterruption:(struct opaqueCMSession { } *)a0 interruptionInfo:(struct __CFDictionary { } *)a1;
- (void)handleSecureMicNotificationWithInterruptionInfo:(struct __CFDictionary { } *)a0;
- (BOOL)internalSelectMicrophoneWithType:(unsigned int)a0;
- (void)resetOverrideRoute;
- (void)setBlockSize:(double)a0 sampleRate:(double)a1 force:(BOOL)a2;
- (void)setClientName;
- (void)setSpeakerProperty:(id)a0;
- (void)setVPBlockConfigurationProperties:(id)a0;
- (void)setupInputBeamforming;
- (void)setupSharePlayWithVPOperatingMode:(unsigned int)a0;
- (BOOL)startSessionWithMediaProperties:(id)a0 sessionRef:(unsigned int *)a1;

@end
