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

- (long long)linkType;
- (void)stopDiscoveringAccessoryServers;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)accessoryServerBrowser:(id)a0 didDiscoverUnpairedAccessoryServer:(id)a1;
- (void)accessoryServerBrowser:(id)a0 didLosePairedAccessoryServer:(id)a1 error:(id)a2;
- (id)initWithQueue:(id)a0;
- (void)accessoryServerBrowser:(id)a0 didLoseUnpairedAccessoryServer:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)accessoryServerBrowser:(id)a0 didStartDiscoveringWithError:(id)a1;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)startDiscoveringAccessoryServers;
- (id)initWithHAP2Browser:(id)a0 queue:(id)a1;
- (void)deRegisterAccessoryWithIdentifier:(id)a0;
- (void)accessoryServerBrowser:(id)a0 didDiscoverPairedAccessoryServer:(id)a1;
- (BOOL)isPaired:(id)a0;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)startConfirmingPairedAccessoryReachability;
- (id)initWithQueue:(id)a0 storage:(id)a1;
- (void)registerPairedAccessoryWithIdentifier:(id)a0;
- (void)accessoryServerBrowser:(id)a0 didStopDiscoveringWithError:(id)a1;

@end
