@class NSMutableArray;
@protocol WFBlacklistDelegate;

@interface WFBlacklistEngine : NSObject {
    unsigned long long _profile;
    NSMutableArray *_blacklist;
}

@property (nonatomic) id<WFBlacklistDelegate> blacklistDelegate;
@property BOOL enabled;
@property (retain) NSMutableArray *ssidThresholds;
@property (retain) NSMutableArray *bssidThresholds;
@property double wowBlacklistExpiry;
@property double autojoinBlacklistExpiry;
@property double bssBlacklistExpiry;

+ (id)stringRepresentationWithReason:(unsigned long long)a0;
+ (id)stringRepresentationWithState:(unsigned long long)a0;

- (BOOL)removeBlacklistedStateForNetworkWithReason:(id)a0 state:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)networkPruned:(id)a0;
- (long long)getRssiWhenNetworkWasBlacklisted:(id)a0;
- (void)setTriggerForNetworkWithReasonAndState:(id)a0 reason:(unsigned long long)a1 reasonData:(long long)a2 bssid:(id)a3 state:(unsigned long long)a4;
- (void)setTriggerForNetworkWithReason:(id)a0 reason:(unsigned long long)a1 reasonData:(long long)a2 bssid:(id)a3;
- (void)removeExpiredBlacklistedState:(unsigned long long)a0;
- (id)retrieveNetworksInBlacklistedState:(unsigned long long)a0;
- (id)getBlacklist;
- (unsigned long long)getBlacklistedNetworkCount;
- (void)removeBlacklistedStates;
- (void)configureBlacklistedStateExpiryIntervalInSec:(double)a0 state:(unsigned long long)a1;
- (void)networkRemovedForSsid:(id)a0;
- (void)clearTriggerForNetworkWithUnblacklistReason:(id)a0 reason:(unsigned long long)a1;
- (id)retrieveReasonsForNetworkInBlacklistedState:(id)a0 state:(unsigned long long)a1 timestamps:(id)a2 reasonData:(id)a3;
- (void)setDefaultBlacklistThresholds;
- (BOOL)_evaluateTriggersForBlacklisting:(id)a0 reason:(unsigned long long)a1 reasonData:(long long)a2 bssid:(id)a3 ssid:(id)a4 state:(unsigned long long)a5;
- (void)removeBlacklistedStateWithUnblacklistType:(unsigned long long)a0;
- (BOOL)_evaluateTriggersForUnblacklisting:(id)a0 unblacklistReason:(unsigned long long)a1 ssid:(id)a2;
- (void).cxx_destruct;
- (BOOL)changeBlacklistingThresholds:(unsigned long long)a0 value:(unsigned int)a1 perSsid:(BOOL)a2;
- (id)initWithBlacklistDelegate:(id)a0 profile:(unsigned long long)a1;
- (BOOL)isNetworkBlacklistedForAutoJoinDueToTrigDisc:(id)a0 rssi:(long long *)a1 timestamp:(double *)a2;
- (id)retrieveNetworksInBlacklistedStateHistory:(unsigned long long)a0;
- (id)retrieveBlacklistedNetworkSsids:(unsigned long long)a0;
- (id)getNodeFromBlacklist:(id)a0;
- (id)retrieveBlacklistedStateHistoryForNetwork:(id)a0 state:(unsigned long long)a1 timestamps:(id)a2 reasonData:(id)a3;
- (BOOL)isNetworkInBlacklistedState:(id)a0 state:(unsigned long long)a1;
- (void)dealloc;
- (void)_printBlacklist;
- (void)_setBlacklistedState:(id)a0 state:(unsigned long long)a1 reason:(unsigned long long)a2 reasonData:(long long)a3;
- (BOOL)_meetsThresholds:(unsigned long long)a0 count:(unsigned int)a1 perSsid:(BOOL)a2 bssid:(id)a3 ssid:(id)a4;
- (id)_findBlacklistNode:(id)a0;
- (BOOL)_ignoreTriggersForDeviceProfile:(unsigned long long)a0 node:(id)a1;

@end
