@class PLPhotoLibrary, NSProgress, PLDeferredPhotoFinalizer, PLPhotoLibraryBundle, NSObject;
@protocol OS_dispatch_queue;

@interface PLCameraProcessingAdjustmentService : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic long long _cancellationGenerationCounter;
    NSProgress *_currentProgress;
    PLPhotoLibraryBundle *_libraryBundle;
    PLPhotoLibrary *_photoLibrary;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue;

- (id)deferredPhotoFinalizer;
- (void).cxx_destruct;
- (id)photoLibrary;
- (id)initWithLibraryBundle:(id)a0;
- (id)enqueueCameraProcessingAdjustmentRequestForAssetUUID:(id)a0 imageConversionClient:(id)a1 videoConversionClient:(id)a2 isOnDemand:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
