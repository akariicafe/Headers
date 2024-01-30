@class HMDHAPAccessory, NSString, HMDService, HMFTimer, HMDDataStream, HMDDataStreamSetupOperation, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDDataStreamController : NSObject <HMDDataStreamHAPSetupOperationDelegate, HMFLogging, HMFTimerDelegate, HMDDataStreamDelegate, HMDDataStreamSocketController>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDHAPAccessory *accessory;
@property (weak, nonatomic) HMDService *transferManagementService;
@property (retain, nonatomic) HMDDataStream *defaultDataStream;
@property (retain, nonatomic) NSMutableArray *pendingSocketRequests;
@property (retain, nonatomic) HMDDataStreamSetupOperation *setupInProgress;
@property (readonly, nonatomic) id /* block */ dataStreamFactory;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (nonatomic) BOOL supportsDataStreamOverTCP;
@property (nonatomic) BOOL supportsDataStreamOverHAP;
@property (nonatomic) unsigned long long maxControllerTransportMTU;
@property (retain, nonatomic) HMFTimer *idleTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void)_stopIdleTimer;
- (void).cxx_destruct;
- (void)_startIdleTimer;
- (void)invalidate;
- (void)registerForNotifications;
- (void)addBulkSendListener:(id)a0 fileType:(id)a1;
- (void)removeBulkSendListener:(id)a0;
- (void)dataStreamSetupOperation:(id)a0 didSucceedWithTransport:(id)a1 sessionEncryption:(id)a2;
- (void)dataStreamSetupOperation:(id)a0 didFailWithError:(id)a1;
- (void)dataStreamInitializationSetupOperation:(id)a0 didCompleteSupportReadWithStatus:(BOOL)a1;
- (id)initWithAccessory:(id)a0 service:(id)a1 workQueue:(id)a2;
- (void)openBulkSendSessionForFileType:(id)a0 reason:(id)a1 metadata:(id)a2 queue:(id)a3 callback:(id /* block */)a4;
- (void)dataStreamDidOpen:(id)a0;
- (void)dataStreamDidClose:(id)a0;
- (void)dataStreamDidReceiveRawFrame:(id)a0;
- (void)dataStream:(id)a0 didFailWithError:(id)a1;
- (void)dataStreamDidUpdateActiveStatus:(id)a0;
- (void)openStreamSocketWithApplicationProtocol:(id)a0 completion:(id /* block */)a1;
- (id)initWithAccessory:(id)a0 service:(id)a1 workQueue:(id)a2 dataStreamFactory:(id /* block */)a3;
- (void)deRegisterFromNotifications;
- (void)handleAccessoryConnected:(id)a0;
- (void)_resetTransportInfo;
- (void)handleAccessoryConnected;
- (BOOL)_isDataStreamConfigurationValid;
- (void)_readRequiredTransportCharacteristicsIfNeededWithCompletion:(id /* block */)a0;
- (void)_handleAccessoryConnected;
- (void)handleAccessoryDisconnected:(id)a0;
- (id)_getActiveProtocolWithName:(id)a0;
- (BOOL)canAcceptBulkSendListeners;
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)a0;
- (void)_processPendingSocketRequests;
- (void)_failPendingSocketRequestsWithError:(id)a0;
- (id)_getStreamProtocol;
- (void)_createStreamSocketWithStreamProtocol:(id)a0 applicationProtocolName:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isDataStreamCapable;
- (BOOL)setupRequiresCharactertisticReads;
- (void)_initiateStreamSetup;
- (void)_cancelStreamTransportWithError:(id)a0;
- (void)_createBulkStreamProtocol;
- (void)_resetDefaultDataStream;

@end
