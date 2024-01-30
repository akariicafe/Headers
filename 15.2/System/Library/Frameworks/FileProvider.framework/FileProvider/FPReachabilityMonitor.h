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

+ (id)sharedReachabilityMonitor;
+ (BOOL)isNetworkReachableForFlags:(unsigned int)a0;
+ (id)_notifAccountStore;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_accountDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (BOOL)isNetworkReachableForBundle:(id)a0;
- (BOOL)_isCellularAllowedForBR;

@end
