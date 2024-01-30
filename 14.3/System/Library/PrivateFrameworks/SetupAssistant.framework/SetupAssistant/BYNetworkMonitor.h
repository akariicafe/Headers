@class NSObject, NSMutableDictionary, NSHashTable;
@protocol OS_dispatch_queue;

@interface BYNetworkMonitor : NSObject {
    struct __SCNetworkReachability { } *_reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    NSMutableDictionary *_networkTypeBlocks;
    NSObject<OS_dispatch_queue> *_networkTypeQueue;
}

+ (id)sharedInstance;
+ (void)setHoldsWiFiAssertion:(BOOL)a0;
+ (BOOL)holdsWiFiAssertion;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)withMinimumNetworkType:(int)a0 timeout:(double)a1 runBlock:(id /* block */)a2;
- (void)_initNetworkObservation;
- (int)currentNetworkType;
- (int)_networkTypeFromFlags:(unsigned int)a0;
- (void)setCurrentNetworkType:(int)a0;

@end
