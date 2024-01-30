@class PXPhotoKitUIMediaProvider, NSString, PHFetchResult, PHAsset;

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult *_fetchResult;
}

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 requestURLOnly:(BOOL)a4;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
