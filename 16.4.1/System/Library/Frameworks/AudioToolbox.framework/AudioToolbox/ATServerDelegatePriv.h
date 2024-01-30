@interface ATServerDelegatePriv : NSObject <ATServerDelegate>

- (id)spatialPreferencesForSession:(unsigned int)a0 contentType:(unsigned int)a1;
- (void)setTelephonyClientSessionID:(unsigned int)a0;
- (int)refreshRecordPermissions:(const struct { unsigned int x0[8]; } *)a0;
- (int)muteSessionInput:(unsigned int)a0 clientPID:(int)a1 muted:(BOOL)a2;
- (int)handleInterruptionWithID:(unsigned int)a0 clientPID:(int)a1 interruptionState:(unsigned int)a2 interruptionInfo:(id)a3;
- (void)handleCategoryOrModeChange:(unsigned int)a0;
- (BOOL)dolbyDigitalEncoderAvailable;
- (BOOL)spatialAudioEnabled:(unsigned int)a0 mode:(id)a1;

@end
