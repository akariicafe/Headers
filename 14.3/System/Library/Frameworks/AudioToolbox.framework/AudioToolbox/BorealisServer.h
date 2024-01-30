@class NSXPCListener, NSString, VTStateManager, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BorealisServer : NSObject <NSXPCListenerDelegate, VoiceTriggerInterface> {
    struct BorealisServerImpl { void /* function */ **x0; unsigned int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; id x6; id x7; struct HALListener *x8; struct HALListener *x9; int x10; char *x11; int x12; struct CAMutex *x13; id x14; BOOL x15; BOOL x16; BOOL x17; unsigned int x18; } *serverImpl;
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

- (void)sendVoiceTriggerOccuredNotification:(id)a0;
- (void)speechDetectionVADCreated;
- (id)init;
- (void).cxx_destruct;
- (void)speakerStateActiveReply:(id /* block */)a0;
- (void)dealloc;
- (void)initializeWithReply:(id /* block */)a0;
- (void)listeningEnabledReply:(id /* block */)a0;
- (BOOL)heySiriEnabled;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)updateVoiceTriggerConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)voiceTriggerPastDataFramesAvailable:(id /* block */)a0;
- (void)enableBargeInMode:(BOOL)a0 reply:(id /* block */)a1;
- (void)setListeningProperty:(BOOL)a0 reply:(id /* block */)a1;
- (void)speakerStateMutedReply:(id /* block */)a0;
- (void)sendSpeakerActiveStateChangedNotification:(BOOL)a0;
- (void)enableVoiceTriggerListening:(BOOL)a0 reply:(id /* block */)a1;
- (void)hasBargeInSupportReply:(id /* block */)a0;
- (BOOL)hardwareSupportsVoiceTrigger;
- (void)siriClientsRecordingReply:(id /* block */)a0;
- (void)sendSpeakerMuteStateChangedNotification:(BOOL)a0;
- (void)siriClientRecordStateChanged:(BOOL)a0;
- (void)enableSpeakerStateListening:(BOOL)a0 reply:(id /* block */)a1;

@end
