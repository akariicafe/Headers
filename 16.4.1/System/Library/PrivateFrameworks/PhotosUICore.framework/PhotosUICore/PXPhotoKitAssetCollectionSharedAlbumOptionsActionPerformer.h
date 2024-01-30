@class NSString, PXAlbumStreamingOptionsViewController;

@interface PXPhotoKitAssetCollectionSharedAlbumOptionsActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXAlbumStreamingOptionsViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    PXAlbumStreamingOptionsViewController *_presentedOptionsController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canPerformOnAssetCollectionReference:(id)a0 withInputs:(id)a1;
+ (id)localizedTitleForUseCase:(unsigned long long)a0 assetCollectionReference:(id)a1 withInputs:(id)a2;
+ (id)systemImageNameForAssetCollectionReference:(id)a0 withInputs:(id)a1;

- (void)popoverPresentationControllerDidDismissPopover:(id)a0;
- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (void)presentationController:(id)a0 willPresentWithAdaptiveStyle:(long long)a1 transitionCoordinator:(id)a2;
- (BOOL)_shouldDismissOptionsForReason:(int)a0;
- (void)albumStreamingOptionsViewController:(id)a0 didCompleteWithReason:(int)a1;

@end
