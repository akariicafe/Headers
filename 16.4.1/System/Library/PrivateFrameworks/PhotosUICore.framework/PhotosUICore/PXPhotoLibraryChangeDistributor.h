@class NSString, NSHashTable, PHPhotoLibrary, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface PXPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    NSHashTable *_internalObservers;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_changeDeliverySemaphore;
    NSObject<OS_dispatch_group> *_changePausingGroup;
    NSMutableSet *_changePausingTokens;
}

@property (readonly, nonatomic, getter=areChangesPaused) BOOL changesPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerChangeObserver:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (void)distributeChangeOnMainQueue:(id)a0;
- (void)unregisterInternalChangeObserver:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (void)endPausingChanges:(id)a0;
- (void)dealloc;
- (void)registerInternalChangeObserver:(id)a0;
- (id)beginPausingChangesWithTimeout:(double)a0 identifier:(id)a1;
- (void)_notifyPausedStateChange;
- (void).cxx_destruct;

@end
