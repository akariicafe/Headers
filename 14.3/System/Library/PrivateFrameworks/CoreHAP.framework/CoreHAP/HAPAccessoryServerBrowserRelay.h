@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserDelegate;

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser

@property (readonly, nonatomic) NSMutableArray *discoveredAccessoryServers;
@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;

- (long long)linkType;
- (void)stopDiscoveringAccessoryServers;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)_setDelegate:(id)a0 queue:(id)a1;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)startDiscoveringAccessoryServers;
- (void)addAccessoryServerWithStream:(id)a0 name:(id)a1 identifier:(id)a2;
- (void)removeAccessoryServerWithStream:(id)a0;

@end
