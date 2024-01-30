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

- (void)removeChildViewController:(id)a0;
- (void)setViewControllers:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithSection:(id)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)addChildViewController:(id)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (void)setParentViewController:(id)a0;
- (void)setToolbarHidden:(BOOL)a0;
- (void)setToolbarHidden:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)window:(id)a0 shouldAutorotateToInterfaceOrientation:(long long)a1;
- (long long)ITunesStoreUIBarStyle;
- (void)_loadingDidChangeNotification:(id)a0;
- (id)_sectionForViewController:(id)a0;
- (void)_setStoreBarStyle:(long long)a0 clientInterface:(id)a1;
- (BOOL)clearsWeakScriptReferences;
- (id)copyArchivableContext;
- (id)copyScriptViewController;
- (id)initWithSection:(id)a0 rootViewController:(id)a1;
- (void)restoreArchivableContext:(id)a0;

@end
