@protocol ICPaperStyleSheetCollectionViewControllerDelegate;

@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController

@property (nonatomic) unsigned long long initialPaperStyleType;
@property (weak, nonatomic) id<ICPaperStyleSheetCollectionViewControllerDelegate> paperStyleDelegate;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (void)cancelAction:(id)a0;
- (id)indexPathForInitialSelection;
- (id)initWithInitialPaperStyleType:(unsigned long long)a0 delegate:(id)a1;

@end
