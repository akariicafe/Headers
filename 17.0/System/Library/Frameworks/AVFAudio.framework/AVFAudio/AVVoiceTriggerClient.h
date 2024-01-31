@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AVVoiceTriggerClient : NSObject <VoiceTriggerNotificationInterface>

@property (retain, nonatomic) NSXPCConnection *voiceTriggerServerConnection;
@property (nonatomic) int audioSeverUpNotificationToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ avvcServerCrashedBlock;
@property (copy, nonatomic) id /* block */ avvcServerResetBlock;
@property (copy, nonatomic) id /* block */ voiceTriggerBlock;
@property (copy, nonatomic) id /* block */ speakerStateChangedBlock;
@property (copy, nonatomic) id /* block */ speakerMuteStateChangedBlock;
@property (copy, nonatomic) id /* block */ portStateChangedBlock;
@property (copy, nonatomic) id /* block */ siriClientRecordStateChangedBlock;
@property (copy, nonatomic) id /* block */ serverCrashedBlock;
@property (copy, nonatomic) id /* block */ serverResetBlock;
@property (readonly, nonatomic) unsigned long long voiceTriggerPastDataFramesAvailable;

+ (id)sharedInstance;
+ (BOOL)supportsDuckingOnSpeakerOutput;
+ (BOOL)isAPIAvailable;

- (void)siriClientRecordStateChangedNotification:(BOOL)a0 recordingCount:(unsigned long long)a1;
- (void)closeServerConnection;
- (id)init;
- (void)speakerStateChangedNotification:(id)a0;
- (void)removeAudioServerUpNotificationHandler;
- (void)voiceTriggerNotification:(id)a0;
- (void)dealloc;
- (void)speakerMuteStateChangedNotification:(BOOL)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 completionBlock:(id /* block */)a1;
- (void)setAggressiveECMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)enableListeningOnPorts:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)speakerStateMuted;
- (void)enableVoiceTriggerListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)enableSpeakerStateListening:(BOOL)a0;
- (void)setAudioServerUpNotificationHandler;
- (void)portStateActiveCompletionBlock:(id /* block */)a0;
- (void)callServerCrashedBlock;
- (void)portStateChangedNotification:(id)a0;
- (void)enableSpeakerStateListening:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)voiceTriggerPastDataFramesAvailableCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enableBargeInMode:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)setAVVCServerResetBlock:(id /* block */)a0;
- (void)setListeningProperty:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)setAVVCServerCrashedBlock:(id /* block */)a0;
- (void)speakerStateActiveCompletionBlock:(id /* block */)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0;
- (void)speakerStateMutedCompletionBlock:(id /* block */)a0;
- (void)listeningEnabledCompletionBlock:(id /* block */)a0;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void)siriClientsRecordingCompletionBlock:(id /* block */)a0;
- (BOOL)speakerStateActive;
- (void)callServerResetBlock;
- (id)recordingPIDList;
- (void)updateVoiceTriggerConfiguration:(id)a0;

@end
