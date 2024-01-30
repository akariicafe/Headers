@class NSMutableDictionary;

@interface HMDAccessoryPairingLogEventStateManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessoryPairingRetryMapLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessoryPairingProgressStateTrackerLock;
}

@property (readonly, nonatomic) NSMutableDictionary *retryCountMap;
@property (readonly, nonatomic) NSMutableDictionary *pairingProgressStateTracker;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)incrementRetryCount:(id)a0;
- (void)_handlePairingStateProgressNotification:(id)a0;
- (void)clearPairingProgressStateTrackerForIdentifier:(id)a0;
- (void)clearRetryCountMap;
- (id)getLastProgressStateForAccessory:(id)a0;
- (id)getLongestProgressStateForAccessory:(id)a0;
- (double)getTimeDurationForLongestProgressStateForAccessory:(id)a0;
- (double)getTimeDurationForProgressStateForIdentifier:(id)a0 state:(id)a1;
- (unsigned long long)retryCountForIdentifier:(id)a0;
- (void)startProgressStateTrackerWithDate:(id)a0 identifier:(id)a1;
- (void)updateLastPairingProgressStateEventForIdentifier:(id)a0 withDate:(id)a1;
- (void)updatePairingProgressState:(id)a0;

@end
