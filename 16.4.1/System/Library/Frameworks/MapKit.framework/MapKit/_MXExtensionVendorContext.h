@class NSString;
@protocol _MXExtensionResponseObserver;

@interface _MXExtensionVendorContext : _MXExtensionContext <_MXExtensionVendorContextType> {
    id<_MXExtensionResponseObserver> _observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_errorForVendor:(id)a0 requestDispatcher:(id)a1;
- (void)handleRequest:(id)a0 requestDispatcher:(id)a1 completion:(id /* block */)a2;
- (void)startSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1 toObserver:(id)a2;
- (void)stopSendingUpdatesForRequest:(id)a0 requestDispatcher:(id)a1;

@end
