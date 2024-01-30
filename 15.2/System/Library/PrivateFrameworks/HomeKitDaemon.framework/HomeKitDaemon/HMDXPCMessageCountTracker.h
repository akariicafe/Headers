@class NSString, NSMutableDictionary, HMFUnfairLock, NSDate;

@interface HMDXPCMessageCountTracker : NSObject <HMFLogging> {
    HMFUnfairLock *_lock;
    NSMutableDictionary *_acceptedRequests;
    NSMutableDictionary *_erroredRequests;
    NSMutableDictionary *_sentNotifications;
    NSMutableDictionary *_filteredNotifications;
}

@property (retain, nonatomic) NSDate *lastResetDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)xpcCounterTracker;

- (id)dumpState;
- (void).cxx_destruct;
- (id)__init;
- (id)init;
- (void)_resetCounters;
- (void)incrementCounterOfType:(long long)a0 identifier:(id)a1;
- (void)submitCounters;
- (id)_countersOfType:(long long)a0;
- (id)countersOfType:(long long)a0;
- (void)_incrementCounterOfType:(long long)a0 identifier:(id)a1;
- (id)sampleCountersAndReset:(BOOL)a0;

@end
