@class PXUpdater, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXStoryResourcesPreloadingCoordinator : PXObservable <PXStoryMutableResourcesPreloadingCoordinator, PXChangeObserver, PXStoryQueueParticipant> {
    NSMutableArray *_infos;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue;

- (id)initWithQueue:(id)a0;
- (void)didPerformChanges;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)addPreloadingController:(id)a0 withPriority:(long long)a1;
- (void)removePreloadingController:(id)a0;
- (id)_infoForPreloadingController:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_invalidateInfosOrder;
- (void)_updateInfosOrder;
- (void)_invalidatePreloadingControllers;
- (void)_updatePreloadingControllers;

@end
