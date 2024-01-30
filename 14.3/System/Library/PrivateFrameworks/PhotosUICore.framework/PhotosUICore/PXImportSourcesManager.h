@class PHImportController, NSArray, NSMutableArray, PHImportSource;

@interface PXImportSourcesManager : PXObservable <PHImportControllerObserver, PHImportSourceObserver> {
    NSMutableArray *_importSources;
    PHImportSource *_URLImportSource;
}

@property (class, readonly, nonatomic) PXImportSourcesManager *sharedController;

@property (readonly, nonatomic) PHImportController *importController;
@property (readonly, nonatomic) NSArray *importSources;

- (id)init;
- (void).cxx_destruct;
- (void)importSource:(id)a0 didUpdateAsset:(id)a1 propertyMask:(unsigned short)a2;
- (void)importSource:(id)a0 didDeleteAsset:(id)a1;
- (void)nameDidChangeForImportSource:(id)a0;
- (void)importSource:(id)a0 didRemoveAssets:(id)a1;
- (void)importSource:(id)a0 didAddAssets:(id)a1;
- (void)importController:(id)a0 removedImportSource:(id)a1;
- (void)importController:(id)a0 addedImportSource:(id)a1;
- (void)_notifyObserversDidAddImportSource:(id)a0;
- (void)_notifyObserversDidUpdateImportSource:(id)a0;
- (void)_notifyObserversDidRemoveImportSource:(id)a0;
- (id)updateImportSourceForURLs:(id)a0;
- (void)capabilitiesDidChangeForImportSource:(id)a0;
- (void)userHasTrustedHostForImportSource:(id)a0;
- (void)userRequiredToTrustHostForImportSource:(id)a0;

@end
