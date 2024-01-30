@class NSString, UIImage, NSArray, UICollectionViewFlowLayout, NTKGreenfieldB640Model, NSObject, UICollectionView, NSIndexPath;
@protocol OS_dispatch_queue, NTKGreenfieldB640ContentViewControllerDelegate;

@interface NTKGreenfieldB640ContentViewController : BPSWelcomeOptinViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    unsigned long long _state;
    NSArray *_decodedRecipes;
    NTKGreenfieldB640Model *_greenfieldB640Model;
    UICollectionView *_facesCollectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
    NSIndexPath *_selectedWatchBandIndexPath;
    UIImage *_watchBandImage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (weak, nonatomic) id<NTKGreenfieldB640ContentViewControllerDelegate> greenfieldB640delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)alternateButtonTitle;
- (void).cxx_destruct;
- (id)detailString;
- (id)_titleForError:(id)a0;
- (id)titleString;
- (void)_setupViews;
- (id)suggestedButtonTitle;
- (void)suggestedButtonPressed:(id)a0;
- (void)alternateButtonPressed:(id)a0;
- (void)_presentErrorAlert;
- (void)_notifyDelegateOfActionEventWatchFaceSelected;
- (void)_setupContentForAddWathFaceWithBandImagePath:(id)a0 bundle:(id)a1;
- (id)_subtitleForError:(id)a0;
- (void)_didTapShowInternalErrorButton;
- (id)_defaultBandNameForCurrentPairedDevice;
- (void)_updateSelectedState:(BOOL)a0 forCellAtIndexPath:(id)a1;
- (id)initForAddWatchFacesStateWithGreenfieldB640Model:(id)a0;
- (id)initForErrorStateWithGreenfieldB640Model:(id)a0;

@end
