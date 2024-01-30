@class NSMutableSet, DEDSharingInbound, DEDController, NSMutableDictionary, SFService, NSObject, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface DEDSharingConnection : NSObject

@property (retain) DEDSharingInbound *inbound;
@property (weak) DEDController *controller;
@property BOOL listenForClients;
@property BOOL started;
@property (retain) NSMutableDictionary *pongingDevices;
@property (retain) NSMutableDictionary *deviceSessions;
@property (retain) NSMutableDictionary *discoveredDevices;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property (retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore;
@property (retain, nonatomic) SFService *pingService;
@property (retain, nonatomic) SFDeviceDiscovery *pingDiscovery;
@property (retain) NSMutableSet *visiblePingUUIDs;
@property (retain, nonatomic) SFService *workerService;
@property (retain, nonatomic) SFDeviceDiscovery *pongDiscovery;
@property (copy) id /* block */ deviceStatusCallback;

+ (void)checkIn;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopDiscovery;
- (void)start;
- (id)initWithController:(id)a0;
- (void)startPairSetupForDevice:(id)a0;
- (void)tryPIN:(id)a0 forDevice:(id)a1;
- (void)startBugSessionWithIdentifier:(id)a0 configuration:(id)a1 caller:(id)a2 target:(id)a3;
- (void)discoverDevicesWithCompletion:(id /* block */)a0;
- (void)setDeviceDiscoveryCallback:(id /* block */)a0;
- (void)didStartBugSessionWithInfo:(id)a0 forCaller:(id)a1;
- (id)sharingOutboundForBugSessionIdentifier:(id)a0 device:(id)a1;
- (void)startPingDiscovery;
- (void)startWorkerService;
- (void)startPongDiscovery;
- (void)startPingServiceWithCompletion:(id /* block */)a0;
- (void)stopPongDiscovery;
- (void)stopPingService;
- (void)_configureService:(id)a0 withLabel:(id)a1 needsSetup:(BOOL)a2 actionType:(unsigned char)a3 completion:(id /* block */)a4;
- (void)stopPongAdvertisement;
- (void)startPongAdvertisement;
- (void)_handleIncomingPingingDevice:(id)a0;
- (void)updatePongAdvertisement;
- (void)_saveDevice:(id)a0;
- (void)_handleIncomingPongingDevice:(id)a0;
- (void)updateControllerWithDevice:(id)a0 andStatus:(long long)a1;
- (void)trySessionWithFoundDevice:(id)a0;
- (id)_existingSharingSessionForDevice:(id)a0;
- (void)checkReadinessForSFDevice:(id)a0 session:(id)a1;
- (void)stopSession:(id)a0;
- (void)getSystemInfoForDevice:(id)a0;
- (void)createSharingSessionForSFDevice:(id)a0 holdForPIN:(BOOL)a1 completion:(id /* block */)a2;
- (id)blockingSharingSessionForDevice:(id)a0;
- (void)_verifyPairingForSession:(id)a0 holdForPIN:(BOOL)a1 completion:(id /* block */)a2;
- (void)configureSharingInbound:(id)a0;
- (void)configureListenForClients:(BOOL)a0;
- (void)stopPingDiscovery;
- (void)addIncomingSFSession:(id)a0 forIdentifier:(id)a1;

@end
