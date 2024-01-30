@class NSXPCListener, NSString, VTStateManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVBorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {
    struct BorealisServerImpl { void /* function */ **x0; unsigned int x1; struct HALListener *x2; struct HALListener *x3; int x4; char *x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; id x11; id x12; int x13; struct unfair_recursive_lock *x14; id x15; BOOL x16; BOOL x17; unsigned int x18; } *serverImpl;
}

@property (retain, nonatomic) NSXPCListener *serverListener;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) void *mobileAssistantDylib;
@property (nonatomic) void /* function */ *afSiriActivationBuiltInMicVoiceFuncPtr;
@property (nonatomic) void *voiceTriggerDylib;
@property (retain, nonatomic) Class clsVTStateManager;
@property (retain, nonatomic) VTStateManager *vtStateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)enableVoiceTriggerListening:(BOOL)a0 reply:(id /* block */)a1;
- (void)setListeningProperty:(BOOL)a0 reply:(id /* block */)a1;
- (void)speakerStateActiveReply:(id /* block */)a0;
- (void)enableSpeakerStateListening:(BOOL)a0 reply:(id /* block */)a1;
- (void)speakerStateMutedReply:(id /* block */)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 reply:(id /* block */)a1;
- (BOOL)heySiriEnabled;
- (void)voiceTriggerPastDataFramesAvailable:(id /* block */)a0;
- (void)hasBargeInSupportReply:(id /* block */)a0;
- (void)enableBargeInMode:(BOOL)a0 reply:(id /* block */)a1;
- (void)listeningEnabledReply:(id /* block */)a0;
- (void)siriClientsRecordingReply:(id /* block */)a0;
- (void)sendVoiceTriggerOccuredNotification:(id)a0;
- (void)sendSpeakerActiveStateChangedNotification:(BOOL)a0;
- (void)sendSpeakerMuteStateChangedNotification:(BOOL)a0;
- (void)speechDetectionVADCreated;
- (void)siriClientRecordStateChanged:(BOOL)a0;
- (BOOL)hardwareSupportsVoiceTrigger;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)initializeWithReply:(id /* block */)a0;

@end
