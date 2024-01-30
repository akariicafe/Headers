@class NSXPCListener, NSString, VTStateManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVBorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {
    struct BorealisServerImpl { void /* function */ **x0; unsigned int x1; struct HALListener *x2; struct HALListener *x3; struct HALListener *x4; int x5; char *x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; id x12; id x13; int x14; struct unfair_recursive_lock *x15; id x16; BOOL x17; BOOL x18; unsigned int x19; } *serverImpl;
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

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)enableSpeakerStateListening:(BOOL)a0 reply:(id /* block */)a1;
- (void)initializeWithReply:(id /* block */)a0;
- (void)speechDetectionVADCreated;
- (void)voiceTriggerPastDataFramesAvailable:(id /* block */)a0;
- (void)sendSpeakerMuteStateChangedNotification:(BOOL)a0;
- (void)siriClientRecordStateChanged:(BOOL)a0;
- (void)listeningEnabledReply:(id /* block */)a0;
- (void)dealloc;
- (void)setListeningProperty:(BOOL)a0 reply:(id /* block */)a1;
- (void)updateVoiceTriggerConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)setAggressiveECMode:(BOOL)a0 reply:(id /* block */)a1;
- (void)sendSpeakerActiveStateChangedNotification:(BOOL)a0;
- (BOOL)heySiriEnabled;
- (void)siriClientsRecordingReply:(id /* block */)a0;
- (id)init;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void)speakerStateMutedReply:(id /* block */)a0;
- (void)sendVoiceTriggerOccuredNotification:(id)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)enableBargeInMode:(BOOL)a0 reply:(id /* block */)a1;
- (BOOL)hardwareSupportsVoiceTrigger;
- (void)speakerStateActiveReply:(id /* block */)a0;

@end
