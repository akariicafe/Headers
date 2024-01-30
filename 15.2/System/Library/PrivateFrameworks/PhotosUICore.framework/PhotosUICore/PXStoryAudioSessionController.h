@class PXStoryModel, AVAudioSession, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryAudioSessionController : PXStoryController

@property (retain, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) BOOL shouldMixWithOthers;
@property (readonly, weak, nonatomic) PXStoryModel *model;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (void)_invalidateShouldMixWithOthers;
- (void)_updateShouldMixWithOthers;
- (void)setShouldMixWithOthers:(BOOL)a0;
- (void)_invalidateAudioSession;
- (void)_updateAudioSession;
- (void)_workQueue_createAudioSession;
- (void)_handleMediaServicesResetNotification:(id)a0;

@end
