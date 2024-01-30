@class UINavigationController, NSString, SFStartPageCollectionViewController, NSHashTable;
@protocol _SFStartPageDataSource;

@interface _SFStartPageViewController : UIViewController <SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, UINavigationControllerDelegate, _SFStartPagePreviewProviding> {
    UINavigationController *_navigationController;
    SFStartPageCollectionViewController *_rootCollectionViewController;
    NSHashTable *_dataSourceObservers;
}

@property (weak, nonatomic) id<_SFStartPageDataSource> dataSource;
@property (readonly, nonatomic, getter=isShowingRootView) BOOL showingRootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reloadDataAnimatingDifferences:(BOOL)a0;
- (id)sectionsForStartPageCollectionViewController:(id)a0;
- (void)startPageCollectionViewController:(id)a0 toggleSectionExpanded:(id)a1;
- (BOOL)startPageCollectionViewController:(id)a0 isSectionExpanded:(id)a1;
- (id)titleForStartPageCollectionViewController:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)previewViewControllerForFolderWithIdentifier:(id)a0;
- (void)showDetailForFolderWithIdentifier:(id)a0;
- (void)startPageCollectionViewController:(id)a0 didSelectSiteIconWithIdentifier:(id)a1;
- (void)startPageCollectionViewController:(id)a0 didSelectSiteCardWithIdentifier:(id)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)presentViewController:(id)a0 fromItemWithIdentifier:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
