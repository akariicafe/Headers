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

- (id)hasPairedDevice;
- (id)deviceSystemVersionIfAvailable;
- (void)_startObservingDevice:(id)a0;
- (id)hasPairedDeviceIfAvailable;
- (id)_deviceSystemVersionBlocking:(BOOL)a0;
- (id)deviceSystemBuildVersion;
- (id)deviceIsAltAcctIfAvailable;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)_deviceProductTypeBlocking:(BOOL)a0;
- (void)device:(id)a0 propertyDidChange:(id)a1 fromValue:(id)a2;
- (id)_hasPairedDeviceBlocking:(BOOL)a0;
- (id)_deviceIsAltAcctBlocking:(BOOL)a0;
- (id)deviceOsVersionIfAvailable;
- (id)_deviceSystemBuildVersionBlocking:(BOOL)a0;
- (id)deviceProductTypeIfAvailable;
- (void).cxx_destruct;
- (id)init;
- (id)deviceSystemVersion;
- (id)deviceProductType;
- (void)setupClient;
- (id)deviceIsAltAcct;
- (id)_observingProperties;
- (void)_readDeviceInfo:(id)a0;
- (void)_stopObservingDevice:(id)a0;

@end
