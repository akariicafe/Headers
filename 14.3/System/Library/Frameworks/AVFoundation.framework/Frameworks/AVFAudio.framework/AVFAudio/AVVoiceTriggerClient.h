@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AVVoiceTriggerClient : NSObject <VoiceTriggerNotificationInterface>

@property (retain, nonatomic) NSXPCConnection *voiceTriggerServerConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ voiceTriggerBlock;
@property (copy, nonatomic) id /* block */ speakerStateChangedBlock;
@property (copy, nonatomic) id /* block */ speakerMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ siriClientRecordStateChangedBlock;
@property (copy, nonatomic) id /* block */ serverCrashedBlock;
@property (copy, nonatomic) id /* block */ serverResetBlock;
@property (readonly, nonatomic) unsigned long long voiceTriggerPastDataFramesAvailable;

+ (BOOL)isAPIAvailable;

- (void)handleMediaServerDeath:(id)a0;
- (void)handleMediaServerReset:(id)a0;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (id)init;
- (void)enableVoiceTriggerListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)voiceTriggerNotification:(id)a0;
- (void)dealloc;
- (BOOL)hasBargeInSupport;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)enableBargeInMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)closeServerConnection;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (void)callServerResetBlock;
- (void)enableSpeakerStateListening:(BOOL)a0;
- (void)enableSpeakerStateListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)callServerCrashedBlock;
- (BOOL)speakerStateMuted;
- (void)hasBargeInSupportCompletionBlock:(id /* block */)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0;
- (BOOL)speakerStateActive;
- (void)setListeningProperty:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)updateVoiceTriggerConfiguration:(id)a0;
- (void)speakerStateChangedNotification:(id)a0;

@end
