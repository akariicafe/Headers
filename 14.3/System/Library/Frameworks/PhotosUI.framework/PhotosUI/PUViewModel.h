@class PUViewModelChange, NSHashTable, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PUViewModel : NSObject {
    NSObject<OS_dispatch_queue> *_observerQueue;
    long long _nestedChanges;
    NSMutableArray *_pendingChangeBlocks;
    long long _numAppliedPendingChanges;
    PUViewModelChange *_currentChange;
}

@property (nonatomic, getter=_isPublishingChanges, setter=_setPublishingChanges:) BOOL _publishingChanges;
@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (readonly, nonatomic) PUViewModelChange *currentChange;
@property (readonly, nonatomic) PUViewModelChange *currentChangeIfExists;

- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didPerformChanges;
- (void)didPublishChanges;
- (void)performChanges:(id /* block */)a0;
- (id)newViewModelChange;
- (id)debugDetailedDescription;
- (void)_publishChanges;
- (void)willPublishChanges;
- (void)_applyPendingChanges;
- (void)_didChange;
- (void)assertInsideChangesBlock;
- (void)_willChange;

@end
