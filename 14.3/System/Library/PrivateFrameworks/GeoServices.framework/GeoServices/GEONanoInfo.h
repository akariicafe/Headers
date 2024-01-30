@class NRDevice, NSString, NSConditionLock, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface GEONanoInfo : NSObject <NRDevicePropertyObserver> {
    NSConditionLock *_pairedDeviceLock;
    NSObject<OS_dispatch_queue> *_nanoregQueue;
    NSNumber *_hasPairedDevice;
    NRDevice *_currentDevice;
    NSString *_deviceSystemVersion;
    NSString *_deviceSystemBuildVersion;
    NSString *_deviceProductType;
    NSNumber *_deviceIsAltAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInfo;

- (void)device:(id)a0 propertyDidChange:(id)a1 fromValue:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)_deviceIsAltAcctBlocking:(BOOL)a0;
- (id)_observingProperties;
- (id)deviceIsAltAcct;
- (id)deviceProductType;
- (id)_deviceSystemBuildVersionBlocking:(BOOL)a0;
- (id)deviceSystemBuildVersion;
- (id)deviceOsVersionIfAvailable;
- (id)hasPairedDevice;
- (id)_deviceSystemVersionBlocking:(BOOL)a0;
- (void)_startObservingDevice:(id)a0;
- (id)deviceProductTypeIfAvailable;
- (void)_readDeviceInfo:(id)a0;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)hasPairedDeviceIfAvailable;
- (id)_deviceProductTypeBlocking:(BOOL)a0;
- (void)setupClient;
- (id)_hasPairedDeviceBlocking:(BOOL)a0;
- (id)deviceSystemVersion;
- (id)deviceSystemVersionIfAvailable;
- (void)_stopObservingDevice:(id)a0;
- (id)deviceIsAltAcctIfAvailable;

@end
