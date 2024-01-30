@interface SSRRemoteControlClient : NSObject

- (BOOL)waitingForConnection:(double)a0 error:(id *)a1;
- (id)initWithRemoteDeviceUUID:(id)a0;
- (void)addImplicitTrainingUtteranceToRemoteFilePath:(id)a0 forVoiceProfileId:(id)a1 withVoiceTriggerCtxt:(id)a2 locale:(id)a3 withOtherCtxt:(id)a4 completion:(id /* block */)a5;

@end
