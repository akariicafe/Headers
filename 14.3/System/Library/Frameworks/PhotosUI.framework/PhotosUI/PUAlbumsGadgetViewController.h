@class PUSessionInfo, NSString, PXProgrammaticNavigationDestination, UIBarButtonItem;

@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXNavigableCollectionContainer>

@property (retain, nonatomic) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (retain, nonatomic) UIBarButtonItem *plusButtonItem;
@property (retain, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_supportedActionsByKeyCommands;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_performCreateNewFolder;
- (void)_navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)keyCommands;
- (void)provideViewControllersForDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (long long)scrollAnimationIdentifier;
- (id)createPlusButton;
- (void).cxx_destruct;
- (BOOL)canNavigateToCollection:(id)a0;
- (BOOL)allowsBarManagement;
- (void)_performKeyCommand:(id)a0;
- (id)_newAlbumActionWithSpec:(id)a0;
- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_handleDoneButton:(id)a0;
- (void)_updateNavigationBar;
- (void)_performCreateNewSmartAlbum;
- (void)navigateToCollection:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_canPerformActionOfActionType:(long long)a0;
- (void)_performCreateNewSharedAlbum;
- (id)_navigableGadgetForCollection:(id)a0;
- (id)_newSmartAlbumActionWithSpec:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_performCreateNewAlbum;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureSectionHeader:(id)a0;
- (BOOL)_canNavigateToCollection:(id)a0 skipGadgets:(BOOL)a1;
- (id)px_gridPresentation;
- (id)initWithLayout:(id)a0 dataSourceManager:(id)a1;
- (id)_newFolderActionWithSpec:(id)a0;
- (void)_performActionOfActionType:(long long)a0;
- (void)viewDidLoad;
- (id)_newSharedAlbumActionWithSpec:(id)a0;

@end
