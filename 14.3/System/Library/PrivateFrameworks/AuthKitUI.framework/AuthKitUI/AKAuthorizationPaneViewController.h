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

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (double)maximumContentHeight;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)_newContainerView;
- (id)_newStackView;
- (void)_setupContexts;
- (void)sizeToFitPaneContent;
- (void)_adjustForPositionOfScrollView:(id)a0;
- (void)_setCompressedHeightForView:(id)a0;
- (double)_contentTrayOffsetAdjustedForScrollInset:(BOOL)a0;
- (void)_configureContentTrayIfNeeded;
- (void)_updateBlurForTray;
- (BOOL)_shouldEmbedContentTray;
- (BOOL)_isContentUnderTray;
- (id)_indexPathForLastRow;
- (double)_navigationBarHeaderHeight;
- (double)contentScrollOffset;
- (BOOL)shouldEmbedContentTrayIfNeeded;
- (double)intrinsicContentHeight;
- (long long)_safeIndexWithCount:(long long)a0;
- (BOOL)_isContentUnderNavigationBar;
- (double)_deviceSafeAreaBottomInset;

@end
