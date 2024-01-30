@class geo_isolater, NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate, OS_dispatch_source;

@interface _GEOCountryConfigurationLocalProxy : NSObject <CoreTelephonyClientDataDelegate, _GEOCountryConfigurationServerProxy> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_scheduledUpdateTimer;
    id _countryCodeOverrideChangeListener;
    CoreTelephonyClient *_telephonyClient;
    struct __CTServerConnection { } *_telephonyServerConnection;
    geo_isolater *_currentDataContextIsolation;
    BOOL _loadedCurrentDataContext;
    CTXPCServiceSubscriptionContext *_currentDataContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentDataSimChanged:(id)a0;
- (void)_reachabilityChanged:(id)a0;
- (void)_updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)_determineGeoIPCountryCode:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_determineCurrentCountryCode:(id /* block */)a0;
- (void)updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)servingNetworkChanged:(id)a0;
- (void)_scheduleUpdate;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;

@end
