@class NSArray, NSObject;
@protocol OS_dispatch_queue, TSBonjourBrowserDelegate;

@interface TSBonjourBrowser : NSObject {
    struct _DNSServiceRef_t { } *_sdRef;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) id<TSBonjourBrowserDelegate> delegate;
@property (copy, nonatomic) NSArray *nodes;

- (BOOL)stopBrowsing;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addedServiceWithName:(const char *)a0 regType:(const char *)a1 domain:(const char *)a2 onInterface:(unsigned int)a3 withFlags:(unsigned int)a4;
- (void)removedServiceWithName:(const char *)a0 regType:(const char *)a1 domain:(const char *)a2 onInterface:(unsigned int)a3 withFlags:(unsigned int)a4;
- (BOOL)startBrowsingWithError:(id *)a0;

@end
