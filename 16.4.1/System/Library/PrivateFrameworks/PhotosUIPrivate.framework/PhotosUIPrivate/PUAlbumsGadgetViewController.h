@class NSString, PUSessionInfo, PXProgrammaticNavigationDestination;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXChangeObserver, PXNavigableCollectionContainer>

@property (retain, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)a0;
- (id)_createPlusButton;
- (void)_handleDoneButton:(id)a0;
- (void)configureSectionHeader:(id)a0;
- (void)newFolder:(id)a0;
- (void)provideViewControllersForDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (BOOL)canNavigateToCollection:(id)a0;
- (void)newSharedAlbum:(id)a0;
- (long long)scrollAnimationIdentifier;
- (void)_updateNavigationBar;
- (void)newAlbum:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)allowsBarManagement;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)px_gridPresentation;
- (void)_navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_canNavigateToCollection:(id)a0 skipGadgets:(BOOL)a1;
- (id)initWithLayout:(id)a0 dataSourceManager:(id)a1;
- (id)_navigableGadgetForCollection:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)newSmartAlbum:(id)a0;
- (void)viewWillAppear:(BOOL)a0;

@end
