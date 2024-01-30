@class NSArray, PXAssetReference, PXAssetsDataSourceManager, NSString, PXUIMediaProvider;

@interface PXSampleSuggestionProvider : PXGadgetProvider <PXOneUpPresentationDelegate> {
    PXUIMediaProvider *_mediaProvider;
}

@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) PXAssetReference *oneUpInitialAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic) BOOL includeHorizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)oneUpPresentationOrigin:(id)a0;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void).cxx_destruct;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (id)init;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (long long)oneUpPresentationActionContext:(id)a0;
- (void)generateGadgets;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)suggestionGadgetPreviewController:(id)a0 withMediaProvider:(id)a1;
- (void)suggestionGadget:(id)a0 commitViewController:(id)a1;
- (id)initWithHorizontalGadget:(BOOL)a0;
- (id)_fetchSingleImage;
- (id)_fetchHistoricImage;
- (id)_fetchSingleLivePhotoAssetWithVariation:(unsigned short)a0;
- (id)_fetchSingleAssetWithVariation:(unsigned short)a0;
- (id)_fetchSinglePortraitImage;
- (id)_fetchSingleVideo;
- (id)_fetchSingleLoopingVideo;
- (id)_fetchSingleAnimatedImage;
- (id)_lastYearsDate;
- (id)_fetchOptionsForHistoricImage;
- (id)_fetchOptionsForPlaybackStyle:(long long)a0;
- (void)_prepareForOneUpPresentationForGadget:(id)a0;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)a0 withMediaProvider:(id)a1 animated:(BOOL)a2;
- (void)suggestionGadget:(id)a0 willDismissPreviewController:(id)a1;
- (id)_gadgetForAssetReference:(id)a0;

@end
