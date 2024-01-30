@class NSArray, Protocol;
@protocol _GCDeviceDriverConnection;

@interface _GCDeviceDriverServiceConnection : NSObject {
    id<_GCDeviceDriverConnection> _driverConnection;
    id _driverConnectionInterruptionObserver;
    id _driverConnectionInvalidationObserver;
    id _serviceVendor;
    _Atomic BOOL _invalid;
    NSArray *_invalidationHandlers;
}

@property (class, readonly) Protocol *serviceProtocol;

@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;

+ (id)connectionToServiceInDriver:(id)a0 withClient:(id)a1;

- (id)addInvalidationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scheduleSendBarrierBlock:(id /* block */)a0;
- (id)initWithDriverConnection:(id)a0 serviceVendor:(id)a1;
- (id)serviceVendorRequestWithHandler:(id /* block */)a0;
- (id)serviceVendorRequestWithLabel:(id)a0 handler:(id /* block */)a1;

@end
