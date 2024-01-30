@class DMTAutomatedDeviceEnroller, CATTaskServer, NSString, NSError, DMTTaskOperationBuilder;
@protocol DMTBuddyDaemonProximityAutomatedDeviceEnrollmentControllerDelegate, DMTRemoteSetupBroadcasting, DMTDeviceInformationPrimitives, DMTRemoteSetupBroadcastingProvider;

@interface DMTBuddyDaemonProximityAutomatedDeviceEnrollmentController : NSObject <CATTaskServerDelegate>

@property (readonly, nonatomic) id<DMTRemoteSetupBroadcastingProvider> broadcastingProvider;
@property (readonly, nonatomic) id<DMTDeviceInformationPrimitives> deviceInformationPrimitives;
@property (readonly, nonatomic) DMTAutomatedDeviceEnroller *enroller;
@property (readonly, nonatomic) DMTTaskOperationBuilder *operationBuilder;
@property (readonly, weak, nonatomic) id<DMTBuddyDaemonProximityAutomatedDeviceEnrollmentControllerDelegate> delegate;
@property (retain, nonatomic) id<DMTRemoteSetupBroadcasting> broadcaster;
@property (nonatomic, getter=isObservingEnroller) BOOL observingEnroller;
@property (readonly, nonatomic) CATTaskServer *taskServer;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic, getter=isBroadcasting) BOOL broadcasting;
@property (readonly, nonatomic) NSError *enrollmentError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingBroadcasting;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)serverDidInvalidate:(id)a0;
- (void)server:(id)a0 clientSession:(id)a1 didInterruptWithError:(id)a2;
- (id)server:(id)a0 clientSession:(id)a1 operationForRequest:(id)a2 error:(id *)a3;
- (void)server:(id)a0 clientSessionDidDisconnect:(id)a1;
- (void)endBroadcasting;
- (void)resetNetworking;
- (void)broadcasterUpdatedDisplayedPin:(id)a0;
- (void)addHandlersToBroadcaster:(id)a0;
- (void)beginBroadcasting;
- (void)beginEraseAndShutdown;
- (void)beginObservingEnroller;
- (void)broadcasterEncounteredError:(id)a0;
- (void)broadcasterHasPairedTransport:(id)a0;
- (void)delegateEnrollmentError:(id)a0;
- (void)delegateStatusUpdate;
- (void)delegateSuccessfullEnrollment;
- (void)endObservingEnrollerIfNeeded;
- (void)handleServerFailureWithError:(id)a0;
- (id)initWithBroadcastingProvider:(id)a0 enrollmentPrimitives:(id)a1 deviceInformationPrimitives:(id)a2 enrollmentInformationPrimitives:(id)a3 reachabilityPrimitives:(id)a4 wifiActivationPrimitives:(id)a5 wifiPrimitives:(id)a6 profileInstallationPrimitives:(id)a7 destructiveErasePrimitives:(id)a8 powerOffPrimitives:(id)a9 delegate:(id)a10;
- (id)makeFailureCompletionViewModelWithError:(id)a0;
- (id)makeStatusViewModelForCurrentEnrollerState;
- (id)makeSuccessfulCompletionViewModel;
- (void)removeHandlersFromBroadcaster:(id)a0;

@end
