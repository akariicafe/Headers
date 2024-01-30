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
- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (void)dealloc;
- (void)_updateAirplaneMode;
- (void)stop;
- (void)start;
- (BOOL)_isRestrictedPath:(id)a0 policies:(id)a1;
- (void)_updateNetworkState:(id)a0;
- (void)_updateCellularPolicy:(id)a0;
- (void)_updateCellularPolicyFromPolicies:(id)a0;
- (void)_getCellularPolicyWithClient:(struct network_usage_policy_client_s { } *)a0;

@end
