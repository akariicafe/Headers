@class CURunLoopThread, NSObject;
@protocol OS_dispatch_queue;

@interface CUMobileDeviceDiscovery : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int discoveryFlags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;

+ (void)getDevicesWithQueue:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidated;
- (void)activate;
- (void)_mdThreadInitialize;
- (void)_mdThreadFinalize;
- (void)invalidate;

@end
