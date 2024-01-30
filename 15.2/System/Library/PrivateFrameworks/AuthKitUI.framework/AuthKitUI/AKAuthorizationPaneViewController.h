@class UITableView, UIStackView, UIVisualEffectView, NSString, NSLayoutConstraint, NSMutableArray, AKAuthorizationPaneContext;
@protocol AKAuthorizationEditableDataSources, AKAuthorizationPaneDelegate;

@interface AKAuthorizationPaneViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) NSLayoutConstraint *headerWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *footerWidthConstraint;
@property (retain, nonatomic) AKAuthorizationPaneContext *headerPaneContext;
@property (retain, nonatomic) AKAuthorizationPaneContext *footerPaneContext;
@property (retain, nonatomic) NSMutableArray *mutableConstraints;
@property (retain, nonatomic) UIVisualEffectView *blurryTray;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AKAuthorizationPaneDelegate> paneDelegate;
@property (weak, nonatomic) id<AKAuthorizationEditableDataSources> editableDataSources;
@property (readonly, nonatomic) UIStackView *paneHeaderStackView;
@property (readonly, nonatomic) UIStackView *paneFooterStackView;
@property (readonly, nonatomic) BOOL isWristDetectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (double)maximumContentHeight;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)_newContainerView;
- (void)sizeToFitPaneContent;
- (id)_newStackView;
- (double)_navigationBarHeaderHeight;
- (void)_adjustForPositionOfScrollView:(id)a0;
- (void)_setCompressedHeightForView:(id)a0;
- (void)_updateBlurForTray;
- (BOOL)_isContentUnderTray;
- (id)_indexPathForLastRow;
- (long long)_safeIndexWithCount:(long long)a0;
- (void)_setupContexts;
- (double)_contentTrayOffsetAdjustedForScrollInset:(BOOL)a0;
- (void)_configureContentTrayIfNeeded;
- (BOOL)_shouldEmbedContentTray;
- (double)contentScrollOffset;
- (BOOL)shouldEmbedContentTrayIfNeeded;
- (double)intrinsicContentHeight;
- (BOOL)_isContentUnderNavigationBar;
- (double)_deviceSafeAreaBottomInset;

@end
