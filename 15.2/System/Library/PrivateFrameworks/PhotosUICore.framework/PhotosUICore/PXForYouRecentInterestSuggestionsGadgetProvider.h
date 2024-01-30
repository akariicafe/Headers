@class NSString, PXForYouSuggestionAssetsDataSourceManager, PXAssetReference, PXSuggestLessPeopleHelper, PXUIMediaProvider;

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate, PXSuggestLessPeopleHelperDelegate> {
    PXUIMediaProvider *_oneUpMediaProvider;
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (id)oneUpPresentationActionManagerForPreviewing:(id)a0;
- (void).cxx_destruct;
- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (BOOL)_presentViewController:(id)a0;
- (id)init;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (BOOL)oneUpPresentationWantsShowInLibraryButton:(id)a0;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (long long)oneUpPresentationActionContext:(id)a0;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (BOOL)suggestLessPeopleHelper:(id)a0 presentViewController:(id)a1;
- (BOOL)suggestLessPeopleHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_prepareForOneUpPresentationForSuggestion:(id)a0 mediaProvider:(id)a1;
- (void)presentOneUpForSuggestion:(id)a0 withMediaProvider:(id)a1 animated:(BOOL)a2;
- (id)suggestionGadgetPreviewController:(id)a0 withMediaProvider:(id)a1;
- (void)suggestionGadget:(id)a0 commitViewController:(id)a1;
- (void)suggestionGadget:(id)a0 didDismissPreviewController:(id)a1 committing:(BOOL)a2;
- (void)_insertRemoveSuggestionActionIntoPreview:(id)a0 forGadget:(id)a1;
- (void)_insertSuggestLessPersonActionIntoPreview:(id)a0 forGadget:(id)a1;
- (void)_performSuggestLessPersonActionIntoPreview:(id)a0 forGadget:(id)a1;
- (void)_addTTRActionIntoPreview:(id)a0 forGadget:(id)a1;
- (void)_insertSyndicationReplyIntoPreview:(id)a0 forGadget:(id)a1;
- (void)configureGadget:(id)a0;
- (BOOL)_dismissViewController:(id)a0 completion:(id)a1;
- (void)_fileRadarForSuggestion:(id)a0;

@end
