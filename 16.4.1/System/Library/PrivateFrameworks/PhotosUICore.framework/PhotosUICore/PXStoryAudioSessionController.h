@class PXStoryModel, AVAudioSession, NSObject;
@protocol OS_dispatch_queue;

@interface PXStoryAudioSessionController : PXStoryController

@property (retain, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) BOOL shouldMixWithOthers;
@property (readonly, weak, nonatomic) PXStoryModel *model;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)_handleMediaServicesResetNotification:(id)a0;
- (void)_invalidateAudioSession;
- (void)_invalidateShouldMixWithOthers;
- (void)_storyQueue_discardExistingAudioSession;
- (void)_updateAudioSession;
- (void)_updateShouldMixWithOthers;
- (void)_workQueue_createAudioSession;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;
- (id)initWithObservableModel:(id)a0;
- (void)setShouldMixWithOthers:(BOOL)a0;

@end
