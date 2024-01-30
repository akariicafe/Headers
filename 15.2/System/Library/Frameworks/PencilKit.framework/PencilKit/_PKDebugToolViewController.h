@class NSArray, UICollectionView, PKTiledView, UILabel, NSString, UIButton;

@interface _PKDebugToolViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIPopoverPresentationControllerDelegate, PKInkAttributesPickerDelegate>

@property (readonly, nonatomic) UICollectionView *toolCollectionView;
@property (readonly, nonatomic) UILabel *doNotFileBugsLabel;
@property (readonly, nonatomic) UIButton *dismissButton;
@property (readonly, nonatomic) NSArray *tools;
@property (weak, nonatomic) PKTiledView *tiledView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)_images;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)_dismissPane;
- (void)_populateTools;
- (void)_showInkAttributesPickerFromView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ink:(id)a2 shouldHideArrow:(BOOL)a3 completion:(id /* block */)a4;
- (void)inkAttributesPickerDidChangeSelectedInk:(id)a0;

@end
