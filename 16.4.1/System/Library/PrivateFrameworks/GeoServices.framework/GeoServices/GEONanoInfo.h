@class NRDevice, NSString, NSConditionLock, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface GEONanoInfo : NSObject <NRDevicePropertyObserver> {
    BOOL _nanoRegEntitled;
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

- (id)deviceIsAltAcctIfAvailable;
- (id)deviceOsVersionIfAvailable;
- (void)_stopObservingDevice:(id)a0;
- (id)deviceProductType;
- (id)deviceIsAltAcct;
- (id)deviceSystemBuildVersion;
- (id)_deviceSystemVersionBlocking:(BOOL)a0;
- (id)_observingProperties;
- (id)deviceSystemBuildVersionIfAvailable;
- (id)_deviceIsAltAcctBlocking:(BOOL)a0;
- (void)_readDeviceInfo:(id)a0;
- (void)_startObservingDevice:(id)a0;
- (id)_hasPairedDeviceBlocking:(BOOL)a0;
- (id)init;
- (id)deviceSystemVersionIfAvailable;
- (id)hasPairedDeviceIfAvailable;
- (void)device:(id)a0 propertyDidChange:(id)a1 fromValue:(id)a2;
- (void)setupClient;
- (id)deviceSystemVersion;
- (id)_deviceSystemBuildVersionBlocking:(BOOL)a0;
- (id)hasPairedDevice;
- (void).cxx_destruct;
- (id)_deviceProductTypeBlocking:(BOOL)a0;
- (id)deviceProductTypeIfAvailable;

@end
