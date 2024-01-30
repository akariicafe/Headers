@class NSString, NSHashTable, PHPhotoLibrary, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface PXPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
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
- (void)photoLibraryDidChange:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)beginPausingChangesWithTimeout:(double)a0;
- (void)dealloc;
- (void)endPausingChanges:(id)a0;
- (void)_notifyPausedStateChange;
- (void)distributeChangeOnMainQueue:(id)a0;

@end
