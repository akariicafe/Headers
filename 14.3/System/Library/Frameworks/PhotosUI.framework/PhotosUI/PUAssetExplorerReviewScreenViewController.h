@class NSMutableDictionary, PUAssetExplorerReviewScreenAssetsDataSourceManager, PUReviewScreenSpec, PUBrowsingSession, PUJoiningMediaProvider, NSSet, NSString, PUAssetsDataSourceManager, UIAlertController, PUAssetExplorerReviewScreenActionManager, PUMediaProvider, PUActivityProgressController, NSNumber, PUReviewScreenBarsModel, PUPhotoPickerResizeTaskDescriptorViewModel, NSIndexPath;
@protocol PUAssetExplorerReviewScreenViewControllerDelegate, PUReviewAssetProvider;

@interface PUAssetExplorerReviewScreenViewController : UIViewController <PUAssetExplorerReviewScreenActionManagerDelegate, PUReviewAssetProvider, PXChangeObserver> {
    struct { BOOL respondsToDidPressCancel; BOOL respondsToDidPressRetake; BOOL respondsToDidPerformCompletionAction; BOOL respondsToCanPerformActionType; BOOL respondsToShouldEnableActionType; BOOL respondsToWillTransitionToSize; BOOL respondsToFileSizeMenu; } _delegateFlags;
}

@property (readonly, nonatomic) PUAssetsDataSourceManager *_clientDataSourceManager;
@property (readonly, nonatomic) PUAssetExplorerReviewScreenAssetsDataSourceManager *_reviewDataSourceManager;
@property (readonly, nonatomic) PUMediaProvider *_clientMediaProvider;
@property (readonly, nonatomic) PUJoiningMediaProvider *_reviewMediaProvider;
@property (readonly, nonatomic) id<PUReviewAssetProvider> _reviewAssetProvider;
@property (readonly, nonatomic) PUAssetExplorerReviewScreenActionManager *_actionManager;
@property (readonly, nonatomic) PUBrowsingSession *_browsingSession;
@property (readonly, nonatomic) NSMutableDictionary *_reviewAssetRequestsByUUID;
@property (readonly, nonatomic) NSMutableDictionary *_substituteAssetsByUUID;
@property (retain, nonatomic, setter=_setRequestProgressController:) PUActivityProgressController *_requestProgressController;
@property (retain, nonatomic, setter=_setFailedReviewAssetRequestAlertController:) UIAlertController *_failedReviewAssetRequestAlertController;
@property (readonly, nonatomic) unsigned long long _options;
@property (readonly, nonatomic) PUReviewScreenSpec *_spec;
@property (readonly, nonatomic) BOOL _lowMemoryMode;
@property (weak, nonatomic) id<PUAssetExplorerReviewScreenViewControllerDelegate> delegate;
@property (readonly, nonatomic) PUAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;
@property (readonly, copy, nonatomic) NSIndexPath *initialIndexPath;
@property (readonly, copy, nonatomic) NSSet *initialSelectedAssetUUIDs;
@property (readonly, copy, nonatomic) NSSet *initialDisabledLivePhotoAssetUUIDs;
@property (readonly, nonatomic) NSNumber *selectionCountLimit;
@property (readonly, nonatomic) PUReviewScreenBarsModel *reviewBarsModel;
@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performCancelAction;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1 reviewAssetProvider:(id)a2 initialIndexPath:(id)a3 initialSelectedAssetUUIDs:(id)a4 initialDisabledLivePhotoAssetUUIDs:(id)a5 selectionCountLimit:(id)a6 sourceType:(unsigned long long)a7 lowMemoryMode:(BOOL)a8 reviewBarsModel:(id)a9 resizeTaskDescriptorViewModel:(id)a10 options:(unsigned long long)a11;
- (void).cxx_destruct;
- (void)assetExplorerReviewScreenActionManagerDidPressDeselectAll:(id)a0;
- (void)assetExplorerReviewScreenActionManagerDidPressSelectAll:(id)a0;
- (void)assetExplorerReviewScreenActionManagerDidPressSend:(id)a0;
- (id)reviewScreenBarsModelForAssetExplorerReviewScreenActionManager:(id)a0;
- (void)assetExplorerReviewScreenActionManager:(id)a0 didToggleLivePhoto:(id)a1;
- (void)assetExplorerReviewScreenActionManagerDidPressRetake:(id)a0;
- (void)assetExplorerReviewScreenActionManagerDidPressDone:(id)a0;
- (void)assetExplorerReviewScreenActionManagerDidPressCancel:(id)a0;
- (void)assetExplorerReviewScreenActionManager:(id)a0 didPressSelectForAsset:(id)a1;
- (BOOL)assetExplorerReviewScreenActionManager:(id)a0 shouldEnableActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (BOOL)assetExplorerReviewScreenActionManager:(id)a0 canPerformActionType:(unsigned long long)a1 onAsset:(id)a2 inAssetCollection:(id)a3;
- (void)_handleProgressControllerCanceled:(id)a0;
- (void)_showFailedReviewAssetRequestAlert;
- (id)reviewAssetProviderRequestForDisplayAsset:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)funEffectsViewController:(id)a0 didSaveAsset:(id)a1 withCompletion:(unsigned long long)a2;
- (void)photoMarkupController:(id)a0 didFinishWithSavedAsset:(id)a1;
- (id)_createBrowsingSessionIfNecessary;
- (void)photoEditController:(id)a0 didFinishEditingSessionForAsset:(id)a1 completed:(BOOL)a2;
- (id)_createReviewAssetRequestForAsset:(id)a0;
- (void)_updateForCompletedReviewAssetRequest:(id)a0;
- (void)_cancelReviewAssetRequestForAssetUUID:(id)a0;
- (void)_cancelReviewAssetRequests;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1 reviewAssetProvider:(id)a2 initialIndexPath:(id)a3 initialSelectedAssetUUIDs:(id)a4 initialDisabledLivePhotoAssetUUIDs:(id)a5 sourceType:(unsigned long long)a6 reviewBarsModel:(id)a7 options:(unsigned long long)a8;
- (id)_remainingReviewAssetRequests;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1 reviewAssetProvider:(id)a2 initialIndexPath:(id)a3 initialSelectedAssetUUIDs:(id)a4 initialDisabledLivePhotoAssetUUIDs:(id)a5 sourceType:(unsigned long long)a6;
- (id)_reviewAssetRequestForAssetUUID:(id)a0;
- (void)_setSubstituteAsset:(id)a0;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1 reviewAssetProvider:(id)a2 initialIndexPath:(id)a3 initialSelectedAssetUUIDs:(id)a4 initialDisabledLivePhotoAssetUUIDs:(id)a5 selectionCountLimit:(id)a6 sourceType:(unsigned long long)a7 lowMemoryMode:(BOOL)a8 options:(unsigned long long)a9;
- (void)_requestReviewAssetForAsset:(id)a0;
- (void)_handleReviewAssetRequest:(id)a0 completedWithSuccess:(BOOL)a1 canceled:(BOOL)a2 error:(id)a3 reviewAsset:(id)a4;
- (void)_handleFailedReviewAssetRequestAlertControllerDismissal;
- (id)_createProgressControllerForRemainingRequests:(id)a0;
- (void)_tearDownProgressController;
- (id)_substituteAssetForUUID:(id)a0;
- (void)_updateWithSubstituteAsset:(id)a0 shouldSelect:(BOOL)a1;
- (void)_deleteAllLinkedFiles;
- (id)_getSelectedSubstituteAssetsAndRemoveFilesForUnneededAssets;
- (void)_handleSelectionChanged;
- (void)loadView;
- (id)_titleForSelectionCount:(long long)a0;
- (id)_fileSizeMenuForSelectedUUIDs:(id)a0;
- (void)_handleCompletionAction:(unsigned long long)a0;
- (void)assetExplorerReviewScreenActionManager:(id)a0 didPressFunEffectsForAsset:(id)a1;
- (void)_performRetakeAction;
- (void)_performCompletionAction:(unsigned long long)a0;
- (void)_performCompletionActionSteps:(unsigned long long)a0;
- (void)_presentConfidentialityAlertWithConfirmAction:(id /* block */)a0 abortAction:(id /* block */)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
