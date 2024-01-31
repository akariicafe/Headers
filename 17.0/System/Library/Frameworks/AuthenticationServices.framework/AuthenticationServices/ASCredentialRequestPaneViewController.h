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

- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)_newContainerView;
- (void)_adjustForPositionOfScrollView:(id)a0;
- (id)_indexPathForLastRow;
- (BOOL)_isContentUnderTray;
- (double)_navigationBarHeaderHeight;
- (id)_newStackView;
- (long long)_safeIndexWithCount:(long long)a0;
- (void)_setCompressedHeightForView:(id)a0;
- (void)_updateBlurForTray;
- (void)sizeToFitPaneContent;
- (double)_maximumContentHeight;
- (double)_blurryTrayMinimumHeight;
- (double)_intrinsicContentHeight;
- (void)_setUpContexts;
- (id)initRequiringTableView:(BOOL)a0;

@end
