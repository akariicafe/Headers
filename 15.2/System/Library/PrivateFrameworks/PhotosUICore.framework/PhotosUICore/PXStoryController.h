@class PXUpdater, NSString, PXObservable, NSObject;
@protocol PXStoryQueueParticipant, OS_dispatch_queue;

@interface PXStoryController : PXObservable <PXStoryMutableController, PXChangeObserver, PXStoryQueueParticipant>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, weak, nonatomic) PXObservable<PXStoryQueueParticipant> *observableModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)initWithObservableModel:(id)a0;
- (void)configureUpdater:(id)a0;
- (void)handleModelChange:(unsigned long long)a0;

@end
