@class NSString, SKUIAccountButtonsViewController, SKUIAccountButtonsComponent;

@interface SKUIAccountButtonsSection : SKUIStorePageSection <SKUIAccountButtonsDelegate> {
    SKUIAccountButtonsViewController *_accountButtonsViewController;
}

@property (readonly, nonatomic) SKUIAccountButtonsComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfCells;
- (void)dealloc;
- (id)initWithPageComponent:(id)a0;
- (id)backgroundColorForIndexPath:(id)a0;
- (void)willAppearInContext:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (void)addImpressionsForIndexPath:(id)a0 toSession:(id)a1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)a0;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)a0;
- (void)accountButtonsViewControllerDidTapECommerceLink:(id)a0;
- (void)accountButtonsViewControllerDidSignIn:(id)a0;
- (void)accountButtonsViewControllerDidSignOut:(id)a0;
- (id)_accountButtonsViewController;

@end
