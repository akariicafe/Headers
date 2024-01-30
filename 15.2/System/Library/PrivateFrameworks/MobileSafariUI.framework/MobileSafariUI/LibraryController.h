@class NSString, LibraryViewController, BrowserRootViewController, LibraryItemController, NSMutableDictionary, LibraryConfiguration, MainLibrarySectionController, UIViewController;

@interface LibraryController : NSObject <LibraryItemRegistration, UINavigationControllerDelegate, LibraryViewControllerDelegate> {
    NSMutableDictionary *_itemsByCollection;
    LibraryItemController *_lastSelectedItemController;
    UIViewController *_viewControllerForLastSelectedItemController;
    MainLibrarySectionController *_mainLibrarySectionController;
}

@property (readonly, nonatomic) LibraryConfiguration *configuration;
@property (retain, nonatomic) BrowserRootViewController *rootViewController;
@property (retain, nonatomic) LibraryViewController *sidebarViewController;
@property (copy, nonatomic) NSString *currentCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)registerItem:(id)a0 forCollectionType:(id)a1;
- (void)browserViewControllerDidChangeSidebarStyle;
- (void)_updateSidebarButton;
- (void)libraryViewControllerDidClearSelection:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)libraryViewController:(id)a0 didSelectItem:(id)a1;
- (void)_reportSelectedItemForAnalytics:(id)a0;
- (BOOL)libraryViewController:(id)a0 shouldPersistSelectionForItem:(id)a1;

@end
