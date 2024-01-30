@class NSString, PHFetchResult, PHPhotoLibrary, NSObject;
@protocol PXAssetCountObserverDelegate, OS_dispatch_queue;

@interface PXAssetCountObserver : NSObject <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (nonatomic) unsigned long long numberOfAssets;
@property (weak, nonatomic) id<PXAssetCountObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (id)_fetchOptions;
- (id)initWithPhotoLibrary:(id)a0 qosClass:(unsigned int)a1;
- (void)observeReferencedAssets;
- (void)observeInternalFetchPredicate:(id)a0;
- (void)_serialQueue_observeReferencedAssets;
- (void)_serialQueue_observeInternalFetchPredicate:(id)a0;

@end
