@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserDelegate;

@interface HMDDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser

@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSDictionary *demoData;
@property (nonatomic) BOOL accessoryPaired;

- (long long)linkType;
- (void)stopDiscoveringAccessoryServers;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)startDiscoveringAccessoryServers;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)discoverServer;
- (void)loadDemoData:(id)a0 finalized:(BOOL)a1;
- (void)appendDemoData:(id)a0;
- (void)resetDemoAccessory:(id)a0;

@end
