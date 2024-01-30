@class NSString, NSArray, IKAppDocument, SKUIIndexBarControlController, SKUIResourceLoader, SKUIStackTemplateElement, SKUIStorePageSectionsViewController, NSMapTable;

@interface SKUIStackDocumentViewController : SKUIViewController <SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIViewControllerTesting, SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, SKUIResourceLoaderDelegate, SKUIDocumentViewController> {
    IKAppDocument *_document;
    NSArray *_entryListControllers;
    BOOL _hasResetState;
    SKUIIndexBarControlController *_indexBarControlController;
    long long _lastNeedsMoreCount;
    long long _layoutStyle;
    SKUIResourceLoader *_resourceLoader;
    SKUIStackTemplateElement *_templateElement;
    NSMapTable *_viewElementToEntryListController;
}

@property (readonly, nonatomic) SKUIStorePageSectionsViewController *sectionsViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)_resetState;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)_resourceLoader;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)documentDidUpdate:(id)a0;
- (id)_colorScheme;
- (id)impressionableViewElements;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (void)sectionsViewController:(id)a0 willScrollToOffset:(struct CGPoint { double x0; double x1; })a1 visibleRange:(struct SKUIIndexPathRange { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)refresh:(id)a0 refreshControl:(id)a1;
- (void)skui_viewWillAppear:(BOOL)a0;
- (BOOL)performTestWithName:(id)a0 options:(id)a1;
- (long long)_pinningTransitionStyle;
- (void)_updateEntryListControllersWithReload:(BOOL)a0;
- (void)_resetStateForDocumentNotification:(id)a0;
- (id)_indexBarViewElement;
- (void)_configureIndexBarControl:(id)a0;
- (void)_updateIndexBarVisibility;
- (id)_pageSplitsDescription;
- (id)_pullToRefreshElement;
- (void)documentDidUpdate:(id)a0 withTemplate:(id)a1;
- (void)resourceLoader:(id)a0 didLoadAllForReason:(long long)a1;
- (BOOL)_tryToScrollToSectionAtIndexPath:(id)a0;
- (long long)_globalIndexFromIndexPath:(id)a0;
- (long long)_maxGlobalIndex;
- (id)_indexPathFromGlobalIndex:(long long)a0;
- (void)resourceLoaderDidBeginLoading:(id)a0;
- (id)_pageComponentsWithViewElements:(id)a0;
- (BOOL)_shouldShowIndexBar;
- (id)_indexBarControlController;
- (long long)indexBarControlController:(id)a0 numberOfEntryDescriptorsInSection:(long long)a1;
- (id)indexBarControlController:(id)a0 entryDescriptorAtIndexPath:(id)a1;
- (long long)numberOfSectionsInIndexBarControlController:(id)a0;
- (void)indexBarControlController:(id)a0 didSelectEntryDescriptorAtIndexPath:(id)a1;
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)a0;
- (void)indexBarControlControllerDidSelectBeyondTop:(id)a0;
- (void)indexBarEntryListControllerDidInvalidate:(id)a0;
- (void)getModalSourceViewForElementIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithTemplateElement:(id)a0 layoutStyle:(long long)a1;

@end
