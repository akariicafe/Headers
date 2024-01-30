@class CBDiscovery, NSObject;
@protocol OS_dispatch_queue;

@interface DSScanManager : NSObject {
    unsigned long long _bleDiscoveryFlags;
    CBDiscovery *_bleDiscovery;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned long long dsScanFlags;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;

- (void)startScanning;
- (void)stopScanning;
- (void).cxx_destruct;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;
- (BOOL)_shouldUpdateDiscovery;
- (void)_updateBLEDiscoveryFlags;

@end
