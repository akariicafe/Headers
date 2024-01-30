@class NSObject;
@protocol OS_dispatch_queue, CLFindMyAccessoryFirmwareUpdateDelegate;

@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct unique_ptr<CLConnectionClient, std::__1::default_delete<CLConnectionClient> > { struct __compressed_pair<CLConnectionClient *, std::__1::default_delete<CLConnectionClient> > { struct CLConnectionClient *__value_; } __ptr_; } _connection;
}

@property (weak, nonatomic) id<CLFindMyAccessoryFirmwareUpdateDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)handleInterruption;
- (id).cxx_construct;
- (void)updateFirmwareForDevice:(id)a0 withAssetURL:(id)a1;
- (void)getPersonalizationInfoForDevice:(id)a0;
- (void)abortFirmwareUpdateForDevice:(id)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;

@end
