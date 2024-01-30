@class SUSection, NSString, SUClientInterface;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {
    BOOL _canBeWeakScriptReference;
    long long _storeBarStyle;
}

@property (nonatomic, getter=isSkLoading) BOOL skLoading;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (retain, nonatomic) SUSection *section;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSection:(id)a0;
- (void)addChildViewController:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setViewControllers:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)window:(id)a0 shouldAutorotateToInterfaceOrientation:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)removeChildViewController:(id)a0;
- (id)moreListImage;
- (void)setToolbarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setToolbarHidden:(BOOL)a0;
- (void)setParentViewController:(id)a0;
- (id)moreListSelectedImage;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)ITunesStoreUIBarStyle;
- (void)_setStoreBarStyle:(long long)a0 clientInterface:(id)a1;
- (id)copyArchivableContext;
- (id)initWithSection:(id)a0 rootViewController:(id)a1;
- (void)restoreArchivableContext:(id)a0;
- (id)_sectionForViewController:(id)a0;
- (BOOL)clearsWeakScriptReferences;
- (void)_loadingDidChangeNotification:(id)a0;
- (id)copyScriptViewController;

@end
