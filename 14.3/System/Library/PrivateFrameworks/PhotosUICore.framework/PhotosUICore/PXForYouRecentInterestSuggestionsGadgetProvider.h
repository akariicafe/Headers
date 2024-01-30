@class NSString, PXForYouSuggestionAssetsDataSourceManager, PXAssetReference, PXPhotoKitAdjustedUIMediaProvider;

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate> {
    PXPhotoKitAdjustedUIMediaProvider *_oneUpMediaProvider;
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (BOOL)oneUpPresentationWantsShowInLibraryButton:(id)a0;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)a0;
- (long long)oneUpPresentationActionContext:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (BOOL)_prepareForOneUpPresentationForSuggestion:(id)a0;
- (void)presentOneUpForSuggestion:(id)a0 animated:(BOOL)a1;
- (id)suggestionGadgetPreviewController:(id)a0;
- (void)suggestionGadget:(id)a0 commitViewController:(id)a1;
- (void)suggestionGadget:(id)a0 didDismissPreviewController:(id)a1 committing:(BOOL)a2;
- (void)_insertRemoveSuggestionActionIntoPreview:(id)a0 forGadget:(id)a1;
- (void)_fileRadarForSuggestion:(id)a0;
- (void)_addTTRActionIntoPreview:(id)a0 forGadget:(id)a1;

@end
