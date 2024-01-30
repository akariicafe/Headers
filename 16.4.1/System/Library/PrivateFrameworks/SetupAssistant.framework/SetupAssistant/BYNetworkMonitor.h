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
+ (BOOL)holdsWiFiAssertion;
+ (void)setHoldsWiFiAssertion:(BOOL)a0;

- (void)setCurrentNetworkType:(int)a0;
- (void)withMinimumNetworkType:(int)a0 timeout:(double)a1 runBlock:(id /* block */)a2;
- (void)_initNetworkObservation;
- (void)addObserver:(id)a0;
- (int)_networkTypeFromFlags:(unsigned int)a0;
- (int)currentNetworkType;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
