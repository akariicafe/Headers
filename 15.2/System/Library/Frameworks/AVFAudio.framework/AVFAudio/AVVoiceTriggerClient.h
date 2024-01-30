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

- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void)hasBargeInSupportCompletionBlock:(id /* block */)a0;
- (void)removeAudioServerUpNotificationHandler;
- (BOOL)speakerStateActive;
- (void)callServerResetBlock;
- (void)callServerCrashedBlock;
- (BOOL)speakerStateMuted;
- (void)setAudioServerUpNotificationHandler;
- (void)enableVoiceTriggerListening:(BOOL)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (void)setListeningProperty:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)enableVoiceTriggerListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (id)init;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (BOOL)hasBargeInSupport;
- (void)closeServerConnection;
- (void)voiceTriggerNotification:(id)a0;
- (void)enableBargeInMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)enableSpeakerStateListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (void)handleMediaServerReset:(id)a0;
- (void)enableSpeakerStateListening:(BOOL)a0;
- (void)speakerStateChangedNotification:(id)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)handleMediaServerDeath:(id)a0;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;

@end
