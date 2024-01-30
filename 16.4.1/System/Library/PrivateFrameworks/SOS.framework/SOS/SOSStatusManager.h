@class NSUUID, NSTimer, NSXPCConnection, NSString, TUCall;
@protocol SOSCoreAnalyticsReporting;

@interface SOSStatusManager : NSObject <SOSStatusManagerServerProtocol, NSXPCListenerDelegate, SOSPairedDeviceStatusObserver>

@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (nonatomic) BOOL inSOSFlow;
@property (nonatomic) BOOL inSOSFlowOnCurrentDevice;
@property (retain, nonatomic) TUCall *activeSOSCall;
@property (nonatomic) BOOL hasActiveSOSCall;
@property (retain, nonatomic) NSTimer *currentDeviceStatusClearTimer;
@property (retain, nonatomic) NSTimer *pairedDeviceStatusClearTimer;
@property (nonatomic) long long mostRecentTriggerSource;
@property (retain, nonatomic) id<SOSCoreAnalyticsReporting> coreAnalyticsReporter;
@property (retain, nonatomic) NSUUID *handoffTriggerUUID;
@property (nonatomic) long long handoffTrigger;
@property (retain, nonatomic) NSTimer *handoffFallbackTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)flowEndedOnCurrentDevice;
- (void)cancelCurrentDeviceClearStatusTimer;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startPairedDeviceClearStatusTimer;
- (void)sosTriggeredOnPairedDevice:(id)a0;
- (void)cancelPairedDeviceClearStatusTimer;
- (void)updateSOSFlowState:(long long)a0;
- (void)startCurrentDeviceClearStatusTimer;
- (void)startAudioSession;
- (void)startHandoffFallbackTimer;
- (void)checkHandoffFallback;
- (void)handleSOSCallStatusChange:(id)a0;
- (void)flowEndedOnBothDevices;
- (void)handleLostStatusReporterConnection;
- (void)pairedDeviceSOSStatusDidUpdate:(id)a0 progression:(long long)a1 shouldHandleThirdParty:(BOOL)a2;
- (void)checkSOSStatusOnLaunch;
- (void)flowStarted;
- (void)flowStartedOnCurrentDevice;
- (void)triggerHandoffFallback;
- (void)clearHandoffFallbackState;
- (void)_reportSOSEvent:(id)a0 callDuration:(long long)a1;
- (void)sosTriggerPushedToPairedDeviceWithUUID:(id)a0 trigger:(long long)a1;
- (void)endAudioSession;
- (void)cancelHandoffFallbackTimer;
- (void)flowStartedOnEitherDevice;
- (void)flowEnded;
- (id)init;
- (void)sosTriggeredWithUUID:(id)a0 trigger:(long long)a1 source:(long long)a2;
- (void)sosTriggerDisabledWithUUID:(id)a0 trigger:(long long)a1;
- (void).cxx_destruct;
- (void)updatePairedDeviceSOSStatus:(id)a0;

@end
