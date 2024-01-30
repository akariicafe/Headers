@class GCConfigXPCServiceConnection, NSArray, Protocol;

@interface GCConfigXPCServiceServiceConnection : NSObject {
    GCConfigXPCServiceConnection *_rootConnection;
    id _rootConnectionInterruptionObserver;
    id _rootConnectionInvalidationObserver;
    id _serviceVendor;
    _Atomic BOOL _invalid;
    NSArray *_invalidationHandlers;
}

@property (class, readonly) Protocol *serviceProtocol;

@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;

+ (id)connection:(id)a0 withClient:(id)a1;

- (id)addInvalidationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (id)initWithConnection:(id)a0 serviceVendor:(id)a1;
- (id)serviceVendorRequestWithHandler:(id /* block */)a0;
- (id)serviceVendorRequestWithLabel:(id)a0 handler:(id /* block */)a1;

@end
