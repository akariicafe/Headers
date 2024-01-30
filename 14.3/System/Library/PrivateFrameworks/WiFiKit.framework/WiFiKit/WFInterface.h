@class WFNetworkScanRecord, NSString, NSArray, WFClient, NSSet, NSOperationQueue, NSThread, NSRunLoop, NSObject, NSNumber, WFIPMonitor;
@protocol OS_dispatch_queue;

@interface WFInterface : NSObject

@property (retain, nonatomic) NSSet *currentNetworkIssues;
@property (retain, nonatomic) WFNetworkScanRecord *currentNetwork;
@property (copy, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) WFIPMonitor *ipMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *currentNetworkQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanQueueDispatchQueue;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (retain, nonatomic) NSOperationQueue *gasQueue;
@property (retain, nonatomic) NSOperationQueue *scanQueue;
@property (retain, nonatomic) NSOperationQueue *joinQueue;
@property (retain, nonatomic) NSArray *deviceScanChannels;
@property (nonatomic) NSNumber *rssiThreshold;
@property (nonatomic) int ipState;
@property (nonatomic) BOOL ipv4SelfAssigned;
@property (nonatomic) BOOL hasNoGatewayIP;
@property (nonatomic) BOOL currentNetworkIsDirected;
@property (retain, nonatomic) NSThread *callbackThread;
@property (retain, nonatomic) NSRunLoop *callbackRunLoop;
@property BOOL monitoringEvents;
@property BOOL scanning;
@property (weak, nonatomic) WFClient *wifiClient;

- (void)_wifiManagerRestarted:(id)a0;
- (id)initWithDevice:(struct __WiFiDeviceClient { } *)a0;
- (void)_currentNetworkDidChangeWithReason:(unsigned long long)a0 previousNetwork:(id)a1;
- (void).cxx_destruct;
- (void)_hostAPStateDidChange:(id)a0;
- (void)dealloc;
- (void)asyncAssociateToNetwork:(id)a0 password:(id)a1 reply:(id /* block */)a2;
- (void)asyncCurrentNetwork:(id /* block */)a0;
- (void)asyncScanRequest:(id)a0 reply:(id /* block */)a1;
- (void)_startMonitoringWiFiEvents;
- (void)_linkQualityChanged:(id)a0;
- (void)notifyNoNetworksFound;
- (void)_resetCurrentNetworkStates;
- (void)_linkChangedWithInfo:(id)a0;
- (void)disassociateFromCurrentNetwork;
- (void)asyncHS20Supported:(id /* block */)a0;
- (id)_debugLQMString:(id)a0;
- (void)_wifiScanComplete:(id)a0 error:(int)a1;
- (void)asyncAssociateToNetwork:(id)a0 profile:(id)a1 reply:(id /* block */)a2;
- (void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork { } *)a0 forceUpdateNetwork:(BOOL)a1 callback:(id /* block */)a2 userInfo:(id)a3;
- (void)cancelAllScans;
- (void)disassociateFromCarPlayUserConfiguredNetwork;
- (void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork { } *)a0 callback:(id /* block */)a1;
- (void)asyncGASQueryForNetworks:(id)a0 elements:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopMonitoringWiFiEvents;
- (void)_startScanOperation:(id)a0;

@end
