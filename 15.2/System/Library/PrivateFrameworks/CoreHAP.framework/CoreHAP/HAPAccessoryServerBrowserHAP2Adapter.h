@class NSString, NSMutableDictionary, HAP2PropertyLock, NSObject;
@protocol OS_dispatch_queue, HAP2AccessoryServerBrowserPrivate, HAPAccessoryServerBrowserDelegate;

@interface HAPAccessoryServerBrowserHAP2Adapter : HAPAccessoryServerBrowser <HAP2AccessoryServerBrowserDelegate> {
    id<HAPAccessoryServerBrowserDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_discoveredServers;
    id<HAP2AccessoryServerBrowserPrivate> _browser;
    HAP2PropertyLock *_propertyLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)deRegisterAccessoryWithIdentifier:(id)a0;
- (void)registerPairedAccessoryWithIdentifier:(id)a0;
- (long long)linkType;
- (void)startConfirmingPairedAccessoryReachability;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)accessoryServerBrowser:(id)a0 didStopDiscoveringWithError:(id)a1;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)accessoryServerBrowser:(id)a0 didDiscoverPairedAccessoryServer:(id)a1 withCompletion:(id /* block */)a2;
- (void)stopDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)accessoryServerBrowser:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 storage:(id)a1;
- (BOOL)isPaired:(id)a0;
- (void)accessoryServerBrowser:(id)a0 didLosePairedAccessoryServer:(id)a1 error:(id)a2;
- (void)accessoryServerBrowser:(id)a0 didLoseUnpairedAccessoryServer:(id)a1 error:(id)a2;
- (void)accessoryServerBrowser:(id)a0 didDiscoverUnpairedAccessoryServer:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithHAP2Browser:(id)a0 queue:(id)a1;

@end
