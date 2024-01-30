@class NSString, PXForYouSuggestionAssetsDataSourceManager, PXAssetReference, PXPhotoKitAdjustedUIMediaProvider, PXGestureProvider;

@interface PXForYouEditSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate> {
    PXPhotoKitAdjustedUIMediaProvider *_oneUpMediaProvider;
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PXGestureProvider *_oneUpGestureProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureGadget:(id)a0;
- (void)suggestionGadget:(id)a0 willDismissPreviewController:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (BOOL)oneUpPresentationWantsShowInLibraryButton:(id)a0;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (long long)oneUpPresentationActionContext:(id)a0;
- (id)oneUpPresentationGestureProvider:(id)a0;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (long long)oneUpPresentationOrigin:(id)a0;
- (BOOL)_prepareForOneUpPresentationForSuggestion:(id)a0;
- (void)presentOneUpForSuggestion:(id)a0 animated:(BOOL)a1;
- (id)suggestionGadgetPreviewController:(id)a0;
- (void)suggestionGadget:(id)a0 commitViewController:(id)a1;
- (void)suggestionGadget:(id)a0 didDismissPreviewController:(id)a1 committing:(BOOL)a2;

@end
