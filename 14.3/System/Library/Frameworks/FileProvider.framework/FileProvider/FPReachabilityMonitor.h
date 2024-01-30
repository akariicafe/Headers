@class NSObject, NSNumber, NSHashTable;
@protocol OS_dispatch_queue, NSObject;

@interface FPReachabilityMonitor : NSObject {
    NSHashTable *_reachabilityObservers;
    struct __SCNetworkReachability { } *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_queue;
    id<NSObject> _accountDidChangeNotificationObserver;
    NSNumber *_isCellularEnabledForDocumentsAndData;
}

@property (nonatomic) unsigned int reachabilityFlags;

+ (BOOL)isNetworkReachableForFlags:(unsigned int)a0;
+ (id)_notifAccountStore;
+ (id)sharedReachabilityMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)isNetworkReachableForBundle:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_accountDidChange;
- (BOOL)_isCellularAllowedForBR;
- (void)invalidate;

@end
