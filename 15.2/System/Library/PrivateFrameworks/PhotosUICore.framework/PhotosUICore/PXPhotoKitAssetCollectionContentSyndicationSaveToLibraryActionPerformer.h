@class NSString, PHFetchResult, PXContentSyndicationPhotoKitAssetArrivalObserver;

@interface PXPhotoKitAssetCollectionContentSyndicationSaveToLibraryActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXAssetsSharingHelperDelegate> {
    PHFetchResult *_assetsToSaveFetchResult;
    PXContentSyndicationPhotoKitAssetArrivalObserver *_assetArrivalObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)createBarButtonItemForAssetCollectionReference:(id)a0 withTarget:(id)a1 action:(SEL)a2;

- (BOOL)assetsSharingHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)assetsSharingHelper:(id)a0 presentViewController:(id)a1;
- (void).cxx_destruct;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;

@end
