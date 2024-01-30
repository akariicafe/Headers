@class NSString, CPLNetworkState, NSObject, RadiosPreferences;
@protocol OS_dispatch_queue, CPLNetworkWatcherDelegate, OS_nw_path_monitor;

@interface CPLNetworkWatcher : NSObject <RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path_monitor> *_monitor;
    struct network_usage_policy_client_s { } *_networkPolicyClient;
    RadiosPreferences *_radiosPreferences;
}

@property (readonly, nonatomic) NSString *endPoint;
@property (readonly, nonatomic) CPLNetworkState *networkState;
@property (weak, nonatomic) id<CPLNetworkWatcherDelegate> delegate;

- (id)initWithQueue:(id)a0;
- (void)_updateAirplaneMode;
- (void)_updateCellularPolicyFromPolicies:(id)a0;
- (BOOL)_isRestrictedPath:(id)a0 policies:(id)a1;
- (void)start;
- (void)_updateNetworkState:(id)a0;
- (void)_updateCellularPolicy:(id)a0;
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)_getCellularPolicyWithClient:(struct network_usage_policy_client_s { } *)a0;
- (void)dealloc;
- (void)stop;

@end
