@class UIColor, NSArray, UICollectionViewDiffableDataSource, UICollectionView, CKFullScreenEffectManager, NSString;
@protocol CKEffectSelectionViewControllerDelegate;

@interface CKEffectSelectionViewController : UIViewController <UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) CKFullScreenEffectManager *fsem;
@property (retain, nonatomic) NSArray *sendEffects;
@property (retain, nonatomic) UIColor *labelColor;
@property (nonatomic) BOOL labelUsesDarkVibrancy;
@property (weak, nonatomic) id<CKEffectSelectionViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *selectedEffectIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderedEffectIdentifiers;

- (BOOL)becomeFirstResponder;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)effectImageForIndexPath:(id)a0;
- (id)effectTitleForIndexPath:(id)a0;
- (double)maxCellHeight;

@end
