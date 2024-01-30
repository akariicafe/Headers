@class NSObject, GCPromise, _GCHIDServiceInfo, _GCGenericDeviceManager, GCFuture;
@protocol OS_dispatch_queue, _GCDeviceDriverConnection;

@interface _GCGenericPhysicalDevicePending : NSObject <GCGenericDeviceDriverConfigurationServiceClientInterface> {
    NSObject<OS_dispatch_queue> *_queue;
    GCPromise *_devicePromise;
    id<_GCDeviceDriverConnection> _filterConnection;
    id<_GCDeviceDriverConnection> _driverConnection;
}

@property (readonly) GCFuture *device;
@property (readonly) _GCHIDServiceInfo *serviceInfo;
@property (readonly) _GCGenericDeviceManager *manager;
@property (retain) id<_GCDeviceDriverConnection> driverConnection;
@property (retain) id<_GCDeviceDriverConnection> filterConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_onqueue_createDeviceWithModel:(id)a0 service:(id)a1;
- (id)initWithHIDService:(id)a0 manager:(id)a1;
- (void)setDriverConnection:(id)a0 invalidatingPrevious:(BOOL)a1;
- (void)setFilterConnection:(id)a0 invalidatingPrevious:(BOOL)a1;

@end
