@class NSMutableArray, UARPAccessory, NSURL, UARPController, NSObject, UARPSuperBinaryAsset;
@protocol UARPHeySiriModelDelegateProtocol, OS_os_log, OS_dispatch_queue;

@interface UARPHeySiriModelBase : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    UARPController *_controller;
    UARPSuperBinaryAsset *_superbinary;
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    NSMutableArray *_downloadedModels;
    NSMutableArray *_preinstalledModels;
}

@property (readonly) UARPAccessory *accessory;
@property (weak) id<UARPHeySiriModelDelegateProtocol> delegate;

- (unsigned long long)majorVersion;
- (void)setMajorVersion:(unsigned long long)a0;
- (void)setMinorVersion:(unsigned long long)a0;
- (id)url;
- (unsigned long long)minorVersion;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccessory:(id)a0 controller:(id)a1 url:(id)a2;
- (BOOL)processDynamicAsset:(id *)a0;
- (id)superbinary;
- (void)setSuperbinary:(id)a0;
- (void)checkCurrentHeySiriModel;
- (BOOL)offerDynamicAssetToAccessory:(id)a0 tag:(id)a1 error:(id *)a2;

@end
