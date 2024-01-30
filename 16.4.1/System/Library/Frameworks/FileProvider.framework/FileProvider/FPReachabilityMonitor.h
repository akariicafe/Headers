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
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_accountDidChange;
- (BOOL)_isCellularAllowedForBR;
- (BOOL)isNetworkReachableForBundle:(id)a0;

@end
