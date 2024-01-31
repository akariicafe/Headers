@class NSXPCListener, NSString, VTStateManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVBorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {
    struct BorealisServerImpl { void /* function */ **x0; unsigned int x1; struct HALListener *x2; struct HALListener *x3; struct HALListener *x4; int x5; char *x6; char *x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; id x13; id x14; int x15; struct unfair_recursive_lock *x16; id x17; BOOL x18; unsigned int x19; } *serverImpl;
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

- (id)init;
- (BOOL)heySiriEnabled;
- (void)dealloc;
- (void)sendSpeakerMuteStateChangedNotification:(BOOL)a0;
- (void)updateVoiceTriggerConfiguration:(id)a0 reply:(id /* block */)a1;
- (BOOL)hardwareSupportsVoiceTrigger;
- (void)speakerStateMutedReply:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)siriClientRecordStateChanged:(BOOL)a0;
- (void)enableListeningOnPorts:(id)a0 reply:(id /* block */)a1;
- (void)listeningEnabledReply:(id /* block */)a0;
- (void)speakerStateActiveReply:(id /* block */)a0;
- (void)initializeWithReply:(id /* block */)a0;
- (void)setListeningProperty:(BOOL)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)siriClientsRecordingReply:(id /* block */)a0;
- (void)sendActiveStateChangedNotificationForPort:(unsigned long long)a0 isActive:(BOOL)a1;
- (void)voiceTriggerPastDataFramesAvailable:(id /* block */)a0;
- (void)portsActiveReply:(id /* block */)a0;
- (void)getInputChannelInfoCompletion:(id /* block */)a0;
- (void)sendVoiceTriggerOccuredNotification:(id)a0 triggerTime:(unsigned long long)a1;
- (void)enableVoiceTriggerListening:(BOOL)a0 reply:(id /* block */)a1;
- (void)enableBargeInMode:(BOOL)a0 reply:(id /* block */)a1;
- (void)setAggressiveECMode:(BOOL)a0 reply:(id /* block */)a1;
- (void)speechDetectionVADCreated;
- (void)enableSpeakerStateListening:(BOOL)a0 reply:(id /* block */)a1;

@end
