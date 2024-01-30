@class NSString, NSObject;
@protocol OS_dispatch_queue, _GEOCountryConfigurationServerProxyDelegate;

@interface _GEOCountryConfigurationRemoteProxy : NSObject <_GEOCountryConfigurationServerProxy> {
    NSObject<OS_dispatch_queue> *_queue;
    id<_GEOCountryConfigurationServerProxyDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _providersChangedToken;
    id _countryCodeChangeListener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
