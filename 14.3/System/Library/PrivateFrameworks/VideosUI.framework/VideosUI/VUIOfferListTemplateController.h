@class IKViewElement, VUICollectionFooterView, VUICollectionHeaderView, VUIListLockupCollectionViewCell, NSString, IKHeaderElement, UICollectionView, IKSectionElement, VUIOfferListContainerView;

@interface VUIOfferListTemplateController : _TVBgImageLoadingViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _requiresRelayout;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IKSectionElement *sectionElement;
@property (retain, nonatomic) IKHeaderElement *headerElement;
@property (retain, nonatomic) IKViewElement *footerElement;
@property (retain, nonatomic) VUIListLockupCollectionViewCell *computationCell;
@property (retain, nonatomic) VUICollectionHeaderView *computationHeaderView;
@property (retain, nonatomic) VUICollectionFooterView *computationFooterView;
@property (retain, nonatomic) VUIOfferListContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)didCancel;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateWithViewElement:(id)a0;

@end
