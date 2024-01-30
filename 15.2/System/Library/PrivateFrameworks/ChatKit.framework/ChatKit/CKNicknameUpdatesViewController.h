@class NSArray, UICollectionViewDiffableDataSource, NSString, CKNicknameUpdatesCollectionView, UICollectionViewCompositionalLayout;
@protocol CKNicknameUpdatesViewControllerDelegate;

@interface CKNicknameUpdatesViewController : UIViewController <UICollectionViewDelegate, CKNicknameUpdatesCollectionViewCellDelegate>

@property (retain, nonatomic) NSArray *nicknameUpdates;
@property (retain, nonatomic) CKNicknameUpdatesCollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (weak, nonatomic) id<CKNicknameUpdatesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)updatePreferredContentSize;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)updateCell:(id)a0 selectedAction:(unsigned long long)a1 sourceView:(id)a2;
- (void)_doneButtonTapped:(id)a0;
- (void)_nicknameStateChanged:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)cellForItemInCollectionView:(id)a0 atIndexPath:(id)a1 withIdentifier:(id)a2;
- (unsigned long long)cellOrderForIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
