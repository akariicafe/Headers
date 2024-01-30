@class NSString;

@interface TSUSCNetworkReachabilityCore : NSObject <TSUNetworkReachabilityCore> {
    struct __SCNetworkReachability { } *_reachabilityRef;
    id /* block */ _notifyBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReachabilityRef:(const struct __SCNetworkReachability { } *)a0;
- (BOOL)getReachabilityFlags:(out unsigned int *)a0;
- (BOOL)startNotifyingWithQueue:(id)a0 block:(id /* block */)a1;
- (void)stopNotifying;

@end
