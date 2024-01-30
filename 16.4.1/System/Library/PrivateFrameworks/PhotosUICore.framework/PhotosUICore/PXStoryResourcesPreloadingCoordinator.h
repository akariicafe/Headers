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

- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)_infoForPreloadingController:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_invalidateInfosOrder;
- (void)_invalidatePreloadingControllers;
- (void)_updateInfosOrder;
- (void)_updatePreloadingControllers;
- (void)addPreloadingController:(id)a0 withPriority:(long long)a1;
- (void)removePreloadingController:(id)a0;

@end
