@class NSIndexPath, WFContentClassesToolbar, WFModulesCollectionViewLayout, UICollectionView, NSString, WFScrollPositionPinningCollectionView, CKCollectionViewTransactionalDataSource, WFConditionsHostingView, WFWorkflow, WFWorkflowModuleIndentationCache;
@protocol WFModulesSupplementaryViewDataSource, WFContentClassesToolbarDelegate, WFWorkflowViewControllerDelegate, WFComponentNavigationContext, WFModuleModelProvider, UIScrollViewDelegate, WFModulesCollectionViewDelegate;

@interface WFWorkflowViewController : UIViewController <CKComponentProvider, CKSupplementaryViewDataSource, WFCollectionViewDelegateModulesLayout, WFModuleDelegate, WFVariableUIDelegate>

@property (weak, nonatomic) WFScrollPositionPinningCollectionView *pinningCollectionView;
@property (readonly, nonatomic) void /* function */ *cellConfigurationFunction;
@property (nonatomic) double currentModuleWidth;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) NSIndexPath *actionOutputIndexPath;
@property (copy, nonatomic) id /* block */ actionOutputCompletionHandler;
@property (retain, nonatomic) WFConditionsHostingView *conditionsView;
@property (readonly, nonatomic) CKCollectionViewTransactionalDataSource *dataSource;
@property (readonly, weak, nonatomic) WFModulesCollectionViewLayout *collectionViewLayout;
@property (weak, nonatomic) id<WFContentClassesToolbarDelegate> acceptsToolbarDelegate;
@property (weak, nonatomic) id<WFModulesCollectionViewDelegate> collectionViewDelegate;
@property (weak, nonatomic) id<WFModulesSupplementaryViewDataSource> supplementaryViewDataSource;
@property (weak, nonatomic) id<WFModuleModelProvider> modelProvider;
@property (readonly, nonatomic) WFWorkflowModuleIndentationCache *indentationCache;
@property (weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) double maximumModuleWidth;
@property (nonatomic) BOOL alwaysBounceCollectionViewVertically;
@property (nonatomic) BOOL allowsAcceptsToolbar;
@property (readonly, weak, nonatomic) WFContentClassesToolbar *acceptsToolbar;
@property (weak, nonatomic) id<WFWorkflowViewControllerDelegate> delegate;
@property (readonly, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) unsigned long long workflowViewStyle;
@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double maximumContentWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentForModel:(id)a0 context:(id)a1;
+ (id)moduleAppearanceForStyle:(unsigned long long)a0;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)textSizeChanged;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)viewSafeAreaInsetsDidChange;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowExtensionInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (double)moduleWidthForViewSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)indentationLevelForModule:(id)a0 withAction:(id)a1;
- (BOOL)collectionView:(id)a0 layout:(id)a1 shouldHideItemAtIndexPath:(id)a2;
- (id)createModelForAction:(id)a0;
- (id)indexPathOfCellWithSubview:(id)a0;
- (id)initWithWorkflow:(id)a0 style:(unsigned long long)a1;
- (double)collectionView:(id)a0 layout:(id)a1 verticalOffsetForItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 layout:(id)a1 itemAtIndexPath:(id)a2 isConnectedToItemAtIndexPath:(id)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForFooterInSection:(long long)a2;
- (id)initWithWorkflow:(id)a0 style:(unsigned long long)a1 cellConfigurationFunction:(void /* function */ *)a2;
- (BOOL)conditionsEnabled;
- (id)indexPathOfCellContainingResponder:(id)a0;
- (void)removeOutputTokens;
- (void)tappedOutputToken:(id)a0 withModel:(id)a1;
- (void)cancelActionOutputPicking;
- (void)generateNewModelsAndReload;
- (void)configureConditionsView;
- (void)configureAcceptsToolbar;
- (void)invalidateActionConnections;

@end
