@class UIViewController, NSString, PXAssetReference, NSDictionary, PXPhotoKitAssetsDataSourceManager, SearchUICommandEnvironment, UIView;

@interface SearchUIPhotosOneUpController : NSObject <PXOneUpPresentationDelegate, PXActionPerformerDelegate>

@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *activeDataSourceManager;
@property (retain, nonatomic) PXAssetReference *navigatedAssetReference;
@property (nonatomic) BOOL isSyndicated;
@property (retain) NSDictionary *rowModelsForCorespotlightIdentifiers;
@property (retain) SearchUICommandEnvironment *commandEnvironment;
@property (weak) UIView *hiddenView;
@property (weak) UIViewController *peekedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)corespotlightIdentifierForAsset:(id)a0;
+ (id)bundleIdentifierForAsset:(id)a0;

- (long long)oneUpPresentationOrigin:(id)a0;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (void)oneUpPresentation:(id)a0 scrollAssetReferenceToVisible:(id)a1;
- (void).cxx_destruct;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (void)actionPerformer:(id)a0 didChangeState:(unsigned long long)a1;
- (id)oneUpPresentationActionManager:(id)a0;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (long long)oneUpPresentationActionContext:(id)a0;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (id)oneUpPresentationMatchedQueryStrings:(id)a0;
- (BOOL)updateWithRowModel:(id)a0 environment:(id)a1;
- (id)rowModelForAsset:(id)a0;
- (id)rowModelForAssetReference:(id)a0;
- (id)viewForAssetReference:(id)a0;
- (id)imageViewInView:(id)a0;
- (id)previewViewControllerForRowModel:(id)a0 environment:(id)a1;
- (void)presentOneUpViewForRowModel:(id)a0 environment:(id)a1;

@end
