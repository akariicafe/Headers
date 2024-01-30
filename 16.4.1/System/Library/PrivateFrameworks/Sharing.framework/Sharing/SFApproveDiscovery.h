@class NSArray, NSMutableDictionary, SFDeviceDiscovery, NSObject;
@protocol OS_dispatch_queue;

@interface SFApproveDiscovery : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateHandler;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFDeviceDiscovery *_deviceDiscovery;
    NSMutableDictionary *_deviceDictionary;
}

@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activatedWithError:(id)a0;
- (void)_discoveryDeviceChanged:(id)a0;
- (void)_discoveryEnsureStarted;
- (void)_discoveryEnsureStopped;
- (void)_discoveryFoundDevice:(id)a0;
- (void)_discoveryLostDevice:(id)a0;

@end
