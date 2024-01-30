@class NSString, OBTableHeaderFooterView, UIView, UITableView;

@interface OBTableWelcomeController : OBWelcomeController <UIScrollViewDelegate>

@property (retain, nonatomic) OBTableHeaderFooterView *headerContainer;
@property (retain, nonatomic) OBTableHeaderFooterView *footerContainer;
@property (nonatomic) BOOL adoptTableViewScrollView;
@property (retain, nonatomic) UIView *hostedTableFooterView;
@property (retain, nonatomic) UIView *hostedTableHeaderView;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupScrollView;
- (void)viewDidLoad;
- (BOOL)contentViewUnderButtonTray;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)setTableFooterView:(id)a0;
- (id)scrollView;
- (void)loadView;
- (void)updateDirectionalLayoutMargins;
- (void)_updateDirectionalLayoutMarginsForTableView;
- (double)headerViewBottomToTableViewTopPadding;
- (void)_updateHeaderTopOffsetConstraint;
- (void)_updateHeaderFooterViewSizeIfNeeded;
- (void)_layoutButtonTray;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)_layoutFooterContainerFloatButtonTray;
- (void)_floatButtonTray;
- (void)_layoutFooterContainerInlineButtonTray;
- (void)_inlineButtonTray;
- (BOOL)_buttonTrayInlined;
- (BOOL)_scrollContentUnderButtonTrayForGroupedStyle;
- (BOOL)_scrollViewContentIsUnderTray;
- (void)_updateTableHeaderViewSizeIfNeeded;
- (void)_updateButtonTrayTableFooterContainerSizeIfNeeded;
- (void)setTableHeaderView:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)_setTableViewNonHeaderFooterDonation:(id)a0;
- (void)_setTableViewWithHeaderFooterDonation:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;

@end
