@class UIStackView, NSString, UIVisualEffectView, ASCredentialRequestPaneContext, NSLayoutConstraint, UITableView;
@protocol ASCredentialRequestPaneViewControllerDelegate;

@interface ASCredentialRequestPaneViewController : UIViewController <UITableViewDelegate> {
    BOOL _isTableViewRequired;
    UIVisualEffectView *_blurryTray;
    NSLayoutConstraint *_headerWidthConstraint;
    NSLayoutConstraint *_footerWidthConstraint;
}

@property (weak, nonatomic) id<ASCredentialRequestPaneViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIStackView *paneHeaderStackView;
@property (readonly, nonatomic) UIStackView *paneFooterStackView;
@property (readonly, nonatomic) ASCredentialRequestPaneContext *headerPaneContext;
@property (readonly, nonatomic) ASCredentialRequestPaneContext *footerPaneContext;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) long long numberOfTableRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (double)_maximumContentHeight;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(BOOL)a0;
- (id)_newContainerView;
- (id)initRequiringTableView:(BOOL)a0;
- (void)sizeToFitPaneContent;
- (double)_intrinsicContentHeight;
- (id)_newStackView;
- (double)_navigationBarHeaderHeight;
- (void)_setUpContexts;
- (double)_blurryTrayMinimumHeight;
- (void)_adjustForPositionOfScrollView:(id)a0;
- (void)_setCompressedHeightForView:(id)a0;
- (void)_updateBlurForTray;
- (BOOL)_isContentUnderTray;
- (id)_indexPathForLastRow;
- (long long)_safeIndexWithCount:(long long)a0;

@end
