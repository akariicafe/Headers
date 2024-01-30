@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AVVoiceTriggerClient : NSObject <VoiceTriggerNotificationInterface>

@property (retain, nonatomic) NSXPCConnection *voiceTriggerServerConnection;
@property (nonatomic) int audioSeverUpNotificationToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ voiceTriggerBlock;
@property (copy, nonatomic) id /* block */ speakerStateChangedBlock;
@property (copy, nonatomic) id /* block */ speakerMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ siriClientRecordStateChangedBlock;
@property (copy, nonatomic) id /* block */ serverCrashedBlock;
@property (copy, nonatomic) id /* block */ serverResetBlock;
@property (readonly, nonatomic) unsigned long long voiceTriggerPastDataFramesAvailable;

+ (BOOL)isAPIAvailable;
+ (BOOL)supportsDuckingOnSpeakerOutput;

- (void)setAudioServerUpNotificationHandler;
- (void)handleMediaServerReset:(id)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (BOOL)speakerStateActive;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;
- (BOOL)speakerStateMuted;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0;
- (void)enableSpeakerStateListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)closeServerConnection;
- (void)enableBargeInMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)voiceTriggerNotification:(id)a0;
- (void)setAggressiveECMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)speakerStateChangedNotification:(id)a0;
- (void)dealloc;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (void)callServerResetBlock;
- (void)removeAudioServerUpNotificationHandler;
- (void)enableSpeakerStateListening:(BOOL)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0;
- (id)init;
- (void)callServerCrashedBlock;
- (void)handleMediaServerDeath:(id)a0;
- (void)setListeningProperty:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;

@end
