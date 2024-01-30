@class NSString, NSArray, Reachability, NSMutableSet;
@protocol RMSDiscoverySessionDelegate;

@interface RMSLocalDiscoverySession : NSObject <RMSServiceProviderDelegate, RMSDiscoverySession> {
    Reachability *_reachability;
    NSMutableSet *_availableServices;
    NSArray *_providers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RMSDiscoverySessionDelegate> delegate;
@property (nonatomic) long long discoveryTypes;
@property (readonly, nonatomic) NSArray *availableServices;
@property (readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable;
@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (void)beginDiscovery;
- (void)endDiscovery;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)serviceProvider:(id)a0 serviceDidBecomeAvailable:(id)a1;
- (void)serviceProvider:(id)a0 serviceDidBecomeUnavailable:(id)a1;
- (void)_handleHSGroupIDDidChangeNotification:(id)a0;
- (void)_handleReachabilityChangedNotification:(id)a0;
- (void)_enableProviders;
- (void)_updateWifiAvailability;
- (id)_providerForDiscoveryType:(long long)a0;

@end
