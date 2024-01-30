@class geo_isolater, NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSObject;
@protocol _GEOCountryConfigurationServerProxyDelegate, OS_dispatch_source, OS_dispatch_queue, GEOCancellable;

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
    id<GEOCancellable> _geoIPLookupTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)currentDataSimChanged:(id)a0;
- (void)_reachabilityChanged:(id)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)servingNetworkChanged:(id)a0;
- (void)_determineGeoIPCountryCode:(id /* block */)a0;
- (void)dealloc;
- (BOOL)_checkThrottlerOrScheduleUpdate:(id *)a0;
- (void)_updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)_postNotificationsForOldInfo:(id)a0 newInfo:(id)a1;
- (void)_determineCurrentCountryCode:(id /* block */)a0;
- (void)_scheduleUpdate:(double)a0;
- (void).cxx_destruct;

@end
