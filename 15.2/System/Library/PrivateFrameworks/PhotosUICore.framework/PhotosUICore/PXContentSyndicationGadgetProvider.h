@class PXContentSyndicationDataSource, NSString, PXContentSyndicationDataSourceManager, PXAssetReference, PXAssetsDataSourceManager, PXGadgetNavigationHelper;
@protocol PXGadgetTransition, PXGadgetDelegate;

@interface PXContentSyndicationGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXContentSyndicationGadgetDelegate, PXOneUpPresentationDelegate> {
    PXAssetReference *_oneUpInitialAssetReference;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
}

@property (readonly, nonatomic) PXContentSyndicationDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXContentSyndicationDataSource *dataSource;
@property (nonatomic) BOOL didGenerateGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXGadgetTransition> gadgetTransition;
@property (readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;

- (long long)oneUpPresentationOrigin:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (id)init;
- (BOOL)oneUpPresentationWantsShowInLibraryButton:(id)a0;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)initWithDataSourceManager:(id)a0;
- (void)_setDataSource:(id)a0 changeDetails:(id)a1;
- (id)_gadgetForAssetReference:(id)a0;
- (void)contentSyndicationGadget:(id)a0 presentOneUpAnimated:(BOOL)a1 asset:(id)a2;
- (id)countsControllerForContentSyndicationGadget:(id)a0;
- (id)_newGadgetForContentSyndicationItem:(id)a0;

@end
