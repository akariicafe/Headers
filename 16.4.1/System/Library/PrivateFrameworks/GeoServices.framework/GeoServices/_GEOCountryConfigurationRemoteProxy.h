@class NSString, NSObject;
@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;

@interface _GEOCountryConfigurationRemoteProxy : NSObject <_GEOCountryConfigurationServerProxy, GEOConfigChangeListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _countryCodeChangedToken;
    int _providersChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)updateCountryCodeWithCallbackQueue:(id)a0 callback:(id /* block */)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
