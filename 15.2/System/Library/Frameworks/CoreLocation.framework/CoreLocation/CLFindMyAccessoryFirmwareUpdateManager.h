@class NSObject;
@protocol OS_dispatch_queue, CLFindMyAccessoryFirmwareUpdateDelegate;

@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__value_; } __ptr_; } _connection;
}

@property (weak, nonatomic) id<CLFindMyAccessoryFirmwareUpdateDelegate> delegate;

- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)handleInterruption;
- (void)updateFirmwareForDevice:(id)a0 withAssetURL:(id)a1;
- (void)abortFirmwareUpdateForDevice:(id)a0;
- (void)getPersonalizationInfoForDevice:(id)a0;
- (void)useLocalFirmwareAssetFromURL:(id)a0 forProductGroup:(id)a1 forProductNumber:(id)a2 withSandboxExtension:(id)a3;
- (void)useDefaultFirmwareAssetSourceForProductGroup:(id)a0 andProductNumber:(id)a1;
- (void)fetchWhetherLocalFirmwareAssetIsInUseForProductGroup:(id)a0 andProductNumber:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (id).cxx_construct;

@end
