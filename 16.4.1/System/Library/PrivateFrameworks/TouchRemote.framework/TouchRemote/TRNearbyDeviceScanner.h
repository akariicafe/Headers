@class NSObject, SFDeviceDiscovery;
@protocol OS_dispatch_queue, TRNearbyDeviceScannerDelegate;

@interface TRNearbyDeviceScanner : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) SFDeviceDiscovery *deviceDiscovery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scannerQ;
@property unsigned long long requestedService;
@property (weak) id<TRNearbyDeviceScannerDelegate> delegate;

+ (void)initialize;

- (void)_handleInterruption;
- (void)_handleInvalidation;
- (void)stopScanning;
- (id)init;
- (void).cxx_destruct;
- (void)openSession:(id)a0 withCompletion:(id /* block */)a1;
- (void)_deviceChanged:(id)a0;
- (void)_deviceFound:(id)a0;
- (void)_handleActivationWithError:(id)a0;
- (void)startScanningForDevicesWithService:(unsigned long long)a0;

@end
