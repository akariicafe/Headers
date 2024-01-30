@protocol ICPaperStyleSheetCollectionViewControllerDelegate;

@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController

@property (nonatomic) unsigned long long initialPaperStyleType;
@property (weak, nonatomic) id<ICPaperStyleSheetCollectionViewControllerDelegate> paperStyleDelegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;
- (id)indexPathForInitialSelection;
- (void)cancelAction:(id)a0;
- (id)initWithInitialPaperStyleType:(unsigned long long)a0 delegate:(id)a1;

@end
