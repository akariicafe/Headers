@class PKTransactionSourceCollection, NSString, PKSpendingSummaryAccountUserCell, PKContactAvatarManager, PKFamilyMemberCollection;

@interface PKSpendingSummaryAccountUserPresenter : NSObject <PKDashboardItemPresenter> {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKContactAvatarManager *_avatarManager;
    PKSpendingSummaryAccountUserCell *_sampleCell;
    double _interimSpacing;
    long long _numUsers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configureCell:(id)a0 item:(id)a1;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (id)initWithTransactionSourceCollection:(id)a0 familyCollection:(id)a1 avatarManager:(id)a2 interimSpacing:(double)a3;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
