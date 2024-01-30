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
    unsigned long long _uarpProtocolVersion;
    NSMutableArray *_downloadedModels;
    NSMutableArray *_preinstalledModels;
}

@property (readonly) UARPAccessory *accessory;
@property (weak) id<UARPHeySiriModelDelegateProtocol> delegate;

- (void)setMajorVersion:(unsigned long long)a0;
- (unsigned long long)majorVersion;
- (id)url;
- (id)init;
- (void)setUrl:(id)a0;
- (unsigned long long)minorVersion;
- (void).cxx_destruct;
- (void)setMinorVersion:(unsigned long long)a0;
- (void)setSuperbinary:(id)a0;
- (void)addDownloadedModel:(id)a0;
- (void)addPreInstalledModel:(id)a0;
- (void)checkCurrentHeySiriModel;
- (id)initWithAccessory:(id)a0 controller:(id)a1 url:(id)a2;
- (id)initWithAccessory:(id)a0 uarpProtocolVersion:(unsigned long long)a1 controller:(id)a2 url:(id)a3;
- (BOOL)offerDynamicAssetToAccessory:(id)a0 tag:(id)a1 error:(id *)a2;
- (BOOL)processDynamicAsset:(id *)a0;
- (id)superbinary;
- (unsigned long long)uarpProtocolVersion;

@end
