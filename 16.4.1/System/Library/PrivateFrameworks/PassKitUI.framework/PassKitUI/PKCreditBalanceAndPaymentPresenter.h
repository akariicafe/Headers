@class PKCreditActivityCell, NSString, UIViewController, NSDateFormatter, PKAccountServiceAccountResolutionController, PKCreditPaymentDueCell, PKCreditBalanceCell;
@protocol PKSpendingSummaryViewControllerDelegate;

@interface PKCreditBalanceAndPaymentPresenter : NSObject <PKCreditPaymentDueCellDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKDashboardItemPresenter> {
    PKCreditBalanceCell *_sampleBalanceCell;
    PKCreditActivityCell *_sampleActivityCell;
    PKCreditPaymentDueCell *_samplePaymentDueCell;
    UIViewController<PKSpendingSummaryViewControllerDelegate> *_viewController;
    PKAccountServiceAccountResolutionController *_resolutionController;
    NSDateFormatter *_paymentDateFormatter;
    NSDateFormatter *_monthDayFormatter;
    NSDateFormatter *_monthFormatter;
    BOOL _isCompactUI;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configurePaymentDueCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;
- (id)_accountServiceResoultionControllerWithItem:(id)a0;
- (void)_configureAccountUserSpendingCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;
- (void)_configureActivityCell:(id)a0 forItem:(id)a1 sizing:(BOOL)a2 inCollectionView:(id)a3 forIndexPath:(id)a4;
- (void)_configureBalanceCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;
- (BOOL)_useAccessibilityLayoutForCollectionView:(id)a0;
- (void)accountServiceAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (BOOL)cellIsIndependentForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (BOOL)cellIsStackableForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (void)paymentButtonTappedForItem:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
