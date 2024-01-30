@class HAPWACAccessory, EasyConfigDevice, NSDate, NSString, HAPWACAccessoryBrowser, NSDictionary, HAPAccessoryServer, NSMutableSet, NSObject, HMFUnfairLock;
@protocol OS_dispatch_queue, HAPWACAccessoryClientDelegate;

@interface HAPWACAccessoryClient : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMFUnfairLock *lock;
@property (readonly, nonatomic) HAPWACAccessory *hapWACAccessory;
@property (readonly, nonatomic) NSMutableSet *compatible2Pt4Networks;
@property (retain, nonatomic) NSDictionary *currentNetworkInfo;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) EasyConfigDevice *ezConfigDevice;
@property (readonly, weak, nonatomic) HAPAccessoryServer *server;
@property (readonly, weak, nonatomic) HAPWACAccessoryBrowser *brower;
@property (nonatomic) unsigned long long restartPairingCount;
@property (copy, nonatomic) id /* block */ restartEasyConfigBlock;
@property (readonly, weak, nonatomic) id<HAPWACAccessoryClientDelegate> clientDelegate;
@property (nonatomic) BOOL metricSubmitted;
@property (nonatomic) double joinLatency;
@property (nonatomic) double restoreLatency;
@property (nonatomic) double configurationLatency;
@property (nonatomic) double preConfigDiscoveryTime;
@property (nonatomic) double postConfigDiscoveryTime;
@property (nonatomic) double setupCodeDelay;
@property (retain, nonatomic) NSDate *setupCodeRequestTime;
@property (nonatomic) unsigned long long retryCount;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)restart;
- (id)init;
- (void).cxx_destruct;
- (void)_reportProgress:(unsigned long long)a0;
- (void)setState:(unsigned long long)a0;
- (void)dumpStatsWithError:(id)a0;
- (id)initWithWACAccessory:(id)a0 server:(id)a1 browser:(id)a2 compatible2Pt4Networks:(id)a3;
- (void)registerClientDelegate:(id)a0;
- (id)joinAccessoryNetworkWithCompletion:(id /* block */)a0;
- (id)performEasyConfigWithParingPrompt:(void /* function */ *)a0 performPairSetup:(BOOL)a1 isSplit:(BOOL)a2 wacWiFiConfig:(id)a3 completion:(id /* block */)a4;
- (void)_joinAccessoryNetworkWithCompletion:(id /* block */)a0;
- (void)_performEasyConfigWithParingPrompt:(void /* function */ *)a0 performPairSetup:(BOOL)a1 isSplit:(BOOL)a2 wacWiFiConfig:(id)a3 completion:(id /* block */)a4;
- (id)continuePairingWithSetupCode:(id)a0;
- (void)stopEasyConfig;
- (id)restoreNetworkWithCompletion:(id /* block */)a0;
- (void)_continuePairingWithSetupCode:(id)a0;
- (void)_callJoinCompletion:(id /* block */)a0 withError:(id)a1;
- (void)_restoreNetworkWithCompletion:(id /* block */)a0;
- (void)_joinAccessory:(id)a0 completion:(id /* block */)a1;
- (void)_callRestoreCompletion:(id /* block */)a0 withError:(id)a1;
- (void)_retoreNetworkAndReportError:(id)a0 withCompletion:(id /* block */)a1;
- (void)_performPostConfig;
- (void)_joinCompleteWithStatus:(int)a0;

@end
