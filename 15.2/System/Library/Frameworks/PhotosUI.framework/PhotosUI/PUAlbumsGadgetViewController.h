@class NSString, PUSessionInfo, PXProgrammaticNavigationDestination;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXNavigableCollectionContainer>

@property (retain, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)px_gridPresentation;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)newFolder:(id)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (id)initWithLayout:(id)a0 dataSourceManager:(id)a1;
- (void)_navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_canNavigateToCollection:(id)a0 skipGadgets:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)a0;
- (BOOL)canNavigateToCollection:(id)a0;
- (long long)scrollAnimationIdentifier;
- (void)_handleDoneButton:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_updateNavigationBar;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)configureSectionHeader:(id)a0;
- (id)_navigableGadgetForCollection:(id)a0;
- (void)newAlbum:(id)a0;
- (void)navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_createPlusButton;
- (void)newSharedAlbum:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)provideViewControllersForDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)newSmartAlbum:(id)a0;
- (BOOL)allowsBarManagement;

@end
