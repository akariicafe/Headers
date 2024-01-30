@class NSMutableDictionary, SKUIMenuBarSectionsViewController, SKUIViewElement, SKUIScrollingSegmentedController, UIView, UIScrollView, NSString, SKUIMenuItemViewElement, SKUILoadingDocumentViewController, SKUIMenuBarTemplateElement, SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, SKUIMenuBarViewElementConfiguration, SKUIDynamicPageSectionIndexMapper, SKUIHorizontalScrollingContainerViewController;
@protocol SKUIMenuBarViewElement;

@interface SKUIMenuBarTemplateDocumentViewController : SKUIViewController <SKUIHorizontalScrollingContainerViewControllerDelegate, SKUIMenuBarViewElementConfigurationDelegate, SKUIScrollingSegmentedControllerDelegate, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling, SKUINavigationBarControllerProviding, SKUIDocumentViewController> {
    SKUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost *_embeddedPaletteHost;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    NSMutableDictionary *_entityUniqueIdentifierToEntityIndex;
    SKUIHorizontalScrollingContainerViewController *_horizontalScrollingContainerViewController;
    SKUILoadingDocumentViewController *_loadingDocumentViewController;
    SKUIMenuBarSectionsViewController *_menuBarSectionsViewController;
    long long _menuBarStyle;
    SKUIViewElement<SKUIMenuBarViewElement> *_menuBarViewElement;
    SKUIMenuBarViewElementConfiguration *_menuBarViewElementConfiguration;
    SKUIMenuItemViewElement *_pendingSelectedMenuItemViewElement;
    SKUIScrollingSegmentedController *_scrollingSegmentedController;
    struct { double progress; BOOL isBouncingOffTheEdge; } _scrollingTabAppearanceStatus;
    SKUIMenuBarTemplateElement *_templateElement;
}

@property (readonly, nonatomic) UIView *titleView;
@property (readonly, nonatomic) double titleViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;

- (id)_contentViewController;
- (void)viewDidLoad;
- (id)_colorScheme;
- (void)setOperationQueue:(id)a0;
- (id)contentScrollView;
- (void)_replaceViewControllerAtIndex:(unsigned long long)a0 withViewController:(id)a1;
- (void)setClientContext:(id)a0;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)documentDidUpdate:(id)a0;
- (id)navigationPaletteView;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (id)_dynamicPageSectionIndexMapper;
- (id)initWithTemplateElement:(id)a0;
- (void)menuBarViewElementConfiguration:(id)a0 didReplaceDocumentForEntityUniqueIdentifier:(id)a1;
- (void)menuBarViewElementConfiguration:(id)a0 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)a1;
- (void)menuBarViewElementConfiguration:(id)a0 selectMenuItemViewElement:(id)a1 animated:(BOOL)a2;
- (void)_reloadContentViewController;
- (void)_removeContentViewController:(id)a0;
- (BOOL)_isFirstViewControllerOnNavigationStack;
- (void)_willDisplayViewControllerAtIndex:(unsigned long long)a0;
- (void)_recordEntityUniqueIdentifier:(id)a0 forEntityIndex:(unsigned long long)a1;
- (id)_newChildViewControllerForEntityAtIndex:(unsigned long long)a0;
- (void)scrollingTabAppearanceStatusWasUpdated:(struct { double x0; BOOL x1; })a0;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)a0;
- (unsigned long long)_menuItemIndexForEntityIndex:(unsigned long long)a0 entityValueProvider:(out id *)a1;
- (id)_childViewControllersForMenuItems;
- (id)_zoomingShelfPageSplitsDescription;
- (void)_addContentViewController:(id)a0;
- (void)horizontalScrollingContainerViewController:(id)a0 willDisplayViewControllerAtIndex:(unsigned long long)a1;
- (void)scrollingSegmentedController:(id)a0 willDisplayViewControllerAtIndex:(unsigned long long)a1;
- (id)navigationBarControllerWithViewElement:(id)a0;

@end
