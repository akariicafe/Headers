@class HMFTimer, HMDHAPAccessory, HMDService, NSNotificationCenter, NSString, NSObject, HMDWiFiReconfigurationLogEvent;
@protocol OS_dispatch_queue;

@interface HMDWiFiManagementController : HMFObject <HMFTimerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic) long long reconfigurationState;
@property (nonatomic) unsigned short reconfigurationCookie;
@property (retain, nonatomic) HMFTimer *reconfigurationTimeoutTimer;
@property (copy, nonatomic) id /* block */ reconfigurationVerificationCallback;
@property (copy, nonatomic) id /* block */ reconfigurationCompletion;
@property (retain, nonatomic) HMDWiFiReconfigurationLogEvent *reconfigurationLogEvent;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) HMDService *service;
@property (readonly) BOOL supportsStationConfiguration;
@property (readonly) long long capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedPSKForNetworkWithSSID:(id)a0;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0 wiFiTransportService:(id)a1 workQueue:(id)a2;
- (void)reconfigureWithSSID:(id)a0 PSK:(id)a1 logEvent:(id)a2 completion:(id /* block */)a3;
- (void)safelyReconfigureWithSSID:(id)a0 PSK:(id)a1 verificationCallback:(id /* block */)a2 logEvent:(id)a3 completion:(id /* block */)a4;
- (void)_accessoryDidBecomeReachable:(id)a0;
- (void)_commitConfigurationUpdate;
- (void)_reconfigurationCompletedWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_performWiFiConfigurationControlRequest:(id)a0 withDescription:(id)a1 completion:(id /* block */)a2;

@end
