@class IDSCrossDeviceTransport, NSString, PrimaryInterfaceUtils, NSObject, HomeKitAgent;
@protocol OS_dispatch_queue, OS_dispatch_source, DiagnosticLiaisonDelegate;

@interface DiagnosticLiaison : NSObject <IDSCrossDeviceTransportEndpoint> {
    BOOL _allowRemoteTrigger;
    NSObject<OS_dispatch_source> *_homekitRelayTimer;
    BOOL _homekitRelayTimedOut;
    HomeKitAgent *_homeKitAgent;
    IDSCrossDeviceTransport *_idsTransport;
    PrimaryInterfaceUtils *_interfaceUtils;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ invalidationHandler;
@property (copy) id /* block */ interruptionHandler;
@property (weak, nonatomic) id<DiagnosticLiaisonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)idsTransport;
- (void)unregisterAllTransportsSync;
- (id)caseSignatureForRemoteSignature:(id)a0 groupIdentifier:(id)a1;
- (id)remoteCasePayloadForIDSTransport:(id)a0 groupID:(id)a1;
- (void)sendPayloadToHomeKitRelays:(id)a0 additionalPredicate:(id)a1 toEndpoint:(id)a2 reply:(id /* block */)a3;
- (id)homeKitAgent;
- (id)abcPayloadForIDSTransport:(BOOL)a0;
- (void)processPayloadFromIDSTransport:(id)a0 incomingTime:(id)a1;
- (id)basicSignatureFrom:(id)a0;
- (void)processPayloadVersionOneFromIDSTransport:(id)a0 incomingTime:(id)a1;
- (void)processPayloadVersionTwoFromIDSTransport:(id)a0 incomingTime:(id)a1;
- (void)startRemotelyTriggeredSessionForSignature:(id)a0 groupIdentifier:(id)a1 events:(id)a2;
- (void)messageReceivedFromIDS:(id)a0;
- (void)messageWithIdentifier:(id)a0 didSendWithSuccess:(BOOL)a1 error:(id)a2;
- (void)messageWithIdentifierHasBeenDelivered:(id)a0;
- (void)registerAdministrativeTransports;
- (void)registerAutoBugCaptureTransports:(id /* block */)a0;
- (void)unregisterAllTransports:(id /* block */)a0;
- (void)remotelyTriggerSessionWithSignature:(id)a0 forDestinations:(id)a1 groupIdentifier:(id)a2 validFor:(double)a3 queue:(id)a4 reply:(id /* block */)a5;
- (void)remotelyTriggerSessionForSignature:(id)a0 groupIdentifier:(id)a1 event:(id)a2 queue:(id)a3 reply:(id /* block */)a4;
- (void)remotelyEnableAutoBugCapture:(id /* block */)a0;
- (void)remotelyDisableAutoBugCapture:(id /* block */)a0;
- (void)residentDevicesIDSIdentifiersWithReply:(id /* block */)a0;
- (void)checkForUIImpactScenarioForCase:(id)a0;

@end
