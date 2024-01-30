@class WLWiFiManager, WLNETRBClient, NSObject, WLWiFiNetwork;
@protocol OS_dispatch_queue;

@interface WLWiFiController : NSObject {
    NSObject<OS_dispatch_queue> *_requestQueue;
    unsigned long long _lastRequestID;
    WLWiFiManager *_wifiManager;
    BOOL _didConsultPreferencesForStartedNetwork;
    WLWiFiNetwork *_startedNetwork;
    WLNETRBClient *_netrbClient;
}

@property (readonly, nonatomic) BOOL hasSoftAPCapability;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_startedNetwork;
- (void)_disableSoftAPWithCompletion:(id /* block */)a0;
- (void)_enableSoftAPWithSSID:(id)a0 password:(id)a1 channel:(id)a2 completion:(id /* block */)a3;
- (void)_ensureStartedNetworkReflectsPreferences;
- (id)_initWithWiFiManager:(id)a0 netrbClient:(id)a1;
- (id)_networkRecordFromSSID:(id)a0 password:(id)a1 channel:(id)a2;
- (unsigned long long)_newRequestID;
- (void)_startWiFiWithSSID:(id)a0 password:(id)a1 channel:(id)a2 completion:(id /* block */)a3;
- (void)_stopWiFiWithCompletion:(id /* block */)a0;
- (void)disableSoftAPWithCompletion:(id /* block */)a0;
- (void)enableSoftAPWithSSID:(id)a0 password:(id)a1 channel:(id)a2 completion:(id /* block */)a3;
- (BOOL)isIPAddressInRange:(id)a0;

@end
