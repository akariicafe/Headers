@class NSString, OBTableHeaderFooterView, UIView, UITableView;

@interface OBTableWelcomeController : OBWelcomeController <UIScrollViewDelegate>

@property (retain, nonatomic) OBTableHeaderFooterView *headerContainer;
@property (retain, nonatomic) OBTableHeaderFooterView *footerContainer;
@property (nonatomic) BOOL adoptTableViewScrollView;
@property (retain, nonatomic) UIView *hostedTableFooterView;
@property (retain, nonatomic) UIView *hostedTableHeaderView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hostedTableFooterPadding;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)scrollView;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)contentViewUnderButtonTray;
- (void)_setTableViewNonHeaderFooterDonation:(id)a0;
- (void)_setTableViewWithHeaderFooterDonation:(id)a0;
- (void)updateDirectionalLayoutMargins;
- (void)_updateDirectionalLayoutMarginsForTableView;
- (double)headerViewBottomToTableViewTopPadding;
- (void)_updateHeaderTopOffsetConstraint;
- (void)_updateHeaderFooterViewSizeIfNeeded;
- (void)_layoutButtonTray;
- (void)_layoutFooterContainerFloatButtonTray;
- (void)_floatButtonTray;
- (void)_layoutFooterContainerInlineButtonTray;
- (void)_inlineButtonTray;
- (BOOL)_buttonTrayInlined;
- (BOOL)_scrollContentUnderButtonTrayForGroupedStyle;
- (BOOL)_scrollViewContentIsUnderTray;
- (void)_updateTableHeaderViewSizeIfNeeded;
- (void)_updateButtonTrayTableFooterContainerSizeIfNeeded;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)viewWillAppear:(BOOL)a0;
- (void)setTableFooterView:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)_setupScrollView;
- (void)viewDidLoad;
- (void)setTableHeaderView:(id)a0;

@end
