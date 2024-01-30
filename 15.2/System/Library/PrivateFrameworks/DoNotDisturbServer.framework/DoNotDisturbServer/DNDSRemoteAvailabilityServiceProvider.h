@class NSString, NSMutableSet, DNDSClientDetailsProvider, BSServiceConnectionListener;
@protocol DNDSRemoteAvailabilityServiceProviderDelegate;

@interface DNDSRemoteAvailabilityServiceProvider : NSObject <BSServiceConnectionListenerDelegate, DNDRemoteAvailabilityServiceServerProtocol> {
    BSServiceConnectionListener *_requestListener;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSMutableSet *_connections;
}

@property (weak, nonatomic) id<DNDSRemoteAvailabilityServiceProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removeConnection:(id)a0;
- (void)_addConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (id)initWithClientDetailsProvider:(id)a0;
- (void)_handleClientConnectionInterrupted:(id)a0;
- (void)getIsLocalUserAvailableWithRequestDetails:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)dealloc;

@end
