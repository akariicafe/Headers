@class NSString;

@interface ATServerDelegatePriv : NSObject <AVAudioSessionServerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)muteSessionInput:(unsigned int)a0 clientPID:(int)a1 muted:(BOOL)a2;
- (void)handleCategoryOrModeChange:(unsigned int)a0;
- (BOOL)dolbyDigitalEncoderAvailable;
- (int)refreshRecordPermissions:(const struct { unsigned int x0[8]; } *)a0;
- (int)handleInterruptionWithID:(unsigned int)a0 clientPID:(int)a1 interruptionState:(unsigned int)a2 interruptionInfo:(id)a3;
- (id)spatialPreferencesForSession:(unsigned int)a0 contentType:(unsigned int)a1;
- (BOOL)spatialAudioEnabled:(unsigned int)a0 mode:(id)a1;
- (void)setTelephonyClientSessionID:(unsigned int)a0;

@end
