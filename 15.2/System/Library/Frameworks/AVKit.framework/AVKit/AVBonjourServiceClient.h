@class NSNetServiceBrowser, NSString, NSMutableSet, NSMutableDictionary;
@protocol AVBonjourServiceClientDelegate;

@interface AVBonjourServiceClient : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    BOOL _discovering;
    NSMutableSet *_resolvedServices;
    NSMutableSet *_resolvingServices;
    NSMutableSet *_monitoringServices;
    NSMutableDictionary *_netServiceIdentifierToChannel;
    id _observeAirPlayVideoActiveDidChange;
    id _observeMRDeviceInfoDidChange;
}

@property (readonly, nonatomic) NSNetServiceBrowser *netServiceBrowser;
@property (nonatomic) void *airplayDeviceRef;
@property (readonly, nonatomic) NSString *serviceType;
@property (weak, nonatomic) id<AVBonjourServiceClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryFromTXTRecordData:(id)a0;

- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1 moreComing:(BOOL)a2;
- (void)netServiceBrowser:(id)a0 didFindService:(id)a1 moreComing:(BOOL)a2;
- (void)netService:(id)a0 didUpdateTXTRecordData:(id)a1;
- (void)beginDiscovery;
- (void)netServiceWillResolve:(id)a0;
- (void)netServiceDidStop:(id)a0;
- (void)netServiceDidResolveAddress:(id)a0;
- (void)endDiscovery;
- (void).cxx_destruct;
- (void)netService:(id)a0 didNotResolve:(id)a1;
- (void)dealloc;
- (void)netServiceBrowser:(id)a0 didNotSearch:(id)a1;
- (id)initWithNetServiceType:(id)a0;
- (void)_updatedAirPlayPairedDeviceAsync;
- (BOOL)_isServiceForCurrentAirPlayDevice:(id)a0;
- (id)identifierForNetService:(id)a0;
- (id)airTransportSenderForNetService:(id)a0;

@end
