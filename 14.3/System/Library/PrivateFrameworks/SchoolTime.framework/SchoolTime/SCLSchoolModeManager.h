@class NSObject, NSMapTable, NSString, NSMutableSet, SCLSchoolModeManagerConfiguration, NSXPCListener, SCLSuppressSchoolModeAssertionManager, SCLTransportService;
@protocol OS_dispatch_queue;

@interface SCLSchoolModeManager : NSObject <NSXPCListenerDelegate, SCLSchoolModeClientProxyDelegate>

@property (readonly, nonatomic) NSMutableSet *clients;
@property (readonly, nonatomic) SCLSchoolModeManagerConfiguration *configuration;
@property (readonly, nonatomic) SCLTransportService *transportService;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (nonatomic) unsigned long long stateHandle;
@property (readonly, nonatomic) SCLSuppressSchoolModeAssertionManager *supppressionManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *coordinatorMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityCriteria;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)clientProxyDidInvalidate:(id)a0;
- (void)clientProxy:(id)a0 didConnectWithPairingID:(id)a1;
- (id)descriptionBuilderForNRDevice:(id)a0;
- (void)loadPairedDevices;
- (void)_updateActivityRegistration;
- (void)handleDevicePairedNotification:(id)a0;
- (void)handleDeviceUnpairedNotification:(id)a0;
- (id)eligiblePairedDevices;
- (void)createControllerForDevice:(id)a0;
- (BOOL)isEligibleDevice:(id)a0;
- (void)removeCoordinator:(id)a0;
- (void)_handleActivityStarted:(id)a0;

@end
