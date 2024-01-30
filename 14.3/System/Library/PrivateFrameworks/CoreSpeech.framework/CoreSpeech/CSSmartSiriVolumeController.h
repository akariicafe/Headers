@class NSString, CSSmartSiriVolumeClient, NSObject;
@protocol OS_dispatch_queue, CSSmartSiriVolumeControllerDelegate;

@interface CSSmartSiriVolumeController : NSObject <CSSmartSiriVolumeClientDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSSmartSiriVolumeClient *ssvClient;
@property (weak, nonatomic) id<CSSmartSiriVolumeControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didSmartSiriVolumeChangeForReason:(unsigned long long)a0;
- (id)getVolumeForTTSType:(unsigned long long)a0 withContext:(id)a1;
- (void)_createSSVClientConnectionIfNeeded;

@end
