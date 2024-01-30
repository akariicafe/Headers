@class NSArray, UICollectionViewDiffableDataSource, UICollectionView, UIVisualEffectView, NSString;
@protocol CKAppMenuViewControllerDelegate;

@interface CKAppMenuViewController : UIViewController <UICollectionViewDelegate, CKAppMenuCollectionViewCellDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (weak, nonatomic) id<CKAppMenuViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)updateBackgroundVisualEffect;
- (void)keyCommandReturn:(id)a0;
- (void)keyCommandEscape:(id)a0;
- (void)handleSelectionOfIndexPath:(id)a0;
- (void)appMenuCollectionViewCell:(id)a0 didHoverWithState:(long long)a1;
- (void)appMenuCollectionViewCellWasTapped:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
