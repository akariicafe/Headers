@class PBFPosterGalleryDataProvider, NSString, UICollectionViewDiffableDataSource;
@protocol _PBFGalleryCollectionViewControllerDelegate, PBFPosterPreviewGenerator;

@interface _PBFGalleryCollectionViewController : UICollectionViewController <PBFPosterGalleryDataProviderObserver, PBFPosterPreviewGenerator> {
    UICollectionViewDiffableDataSource *_diffableDataSource;
    id<PBFPosterPreviewGenerator> _posterPreviewGenerator;
}

@property (retain, nonatomic) PBFPosterGalleryDataProvider *dataProvider;
@property (weak, nonatomic) id<_PBFGalleryCollectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_applySnapshotFromDataProvider:(id)a0;
- (void)configureCell:(id)a0 forCollectionView:(id)a1 posterPreview:(id)a2;
- (void)dataProviderDidUpdate:(id)a0;
- (void)dataProviderWillUpdate:(id)a0;
- (void)fetchComplicationPreviewImagesForPreview:(id)a0 complicationSnapshotReceivedHandler:(id /* block */)a1 errorHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchSnapshotForPosterPreview:(id)a0 completion:(id /* block */)a1;
- (id)posterPreviewGenerator;
- (id)preparedComplicationPreviewImagesForPreview:(id)a0;
- (id)preparedSnapshotForPosterPreview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrameForScrollingPreviewWithIdentifierToVisible:(id)a0;

@end
