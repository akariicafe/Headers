@class PHPhotoLibrary, NSProgress, NSObject;
@protocol OS_dispatch_queue;

@interface PXCPLPhotoLibraryMonitor : PXObservable {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSProgress *_main_postOpenProgress;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isRestoring;

- (id)initWithPhotoLibrary:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)setIsRestoring:(BOOL)a0;
- (void)_main_addObserverForPostOpenProgress:(id)a0;
- (void)_main_removePostOpenProgressObserverIfNeeded;
- (void)_main_updateIsRestoring;
- (void)_queue_subscribeToPostOpenProgressForPhotoLibrary:(id)a0;

@end
