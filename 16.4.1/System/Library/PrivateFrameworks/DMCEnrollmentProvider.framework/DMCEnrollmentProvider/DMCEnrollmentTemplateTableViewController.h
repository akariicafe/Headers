@class UIView, DMCEnrollmentTableViewIconCell, DMCEnrollmentTableViewTitleCell, NSArray, NSString, NSMutableArray, DMCEnrollmentTableViewTextCell, UIVisualEffectView, UILabel;

@interface DMCEnrollmentTemplateTableViewController : UITableViewController

@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *floatyBottomView;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UILabel *bannerLabel;
@property (retain, nonatomic) DMCEnrollmentTableViewIconCell *iconCell;
@property (retain, nonatomic) DMCEnrollmentTableViewTitleCell *titleCell;
@property (retain, nonatomic) DMCEnrollmentTableViewTextCell *subtitleCell;
@property (nonatomic) unsigned long long headerSection;
@property (nonatomic) double gapBetweenButtons;
@property (retain, nonatomic) NSMutableArray *cellDataCollection;
@property (nonatomic) BOOL inProgress;
@property (copy, nonatomic) NSArray *iconNames;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)keyboardWillHide:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)keyboardWillShow:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)keyboardDidShow:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_setUpBackdrops;
- (void)_addBottomView:(id)a0;
- (SEL)_actionSelectorForBarButtonPosition:(unsigned long long)a0;
- (unsigned long long)_addCellDatas:(id)a0 createNewSection:(BOOL)a1 animated:(BOOL)a2;
- (void)_adjustFloatyViewFrameWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationDuration:(double)a1;
- (void)_maskNavigationBar;
- (void)_setupBannerViewWithText:(id)a0;
- (void)_setupHeaderSectionWithIconNames:(id)a0 iconImages:(id)a1 title:(id)a2 subTitle:(id)a3;
- (void)_setupNotification;
- (void)_touchViewFrame:(id)a0;
- (void)_updateEffectiveViewVisibility;
- (void)_updateFloatyViewForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 duration:(double)a1;
- (void)addBottomView:(id)a0;
- (unsigned long long)addCellDatas:(id)a0 animated:(BOOL)a1;
- (void)addCellDatas:(id)a0 toSection:(unsigned long long)a1 animated:(BOOL)a2;
- (void)addFloatyBottomView:(id)a0;
- (unsigned long long)addSectionWithCellDatas:(id)a0 animated:(BOOL)a1;
- (id)initWithIconImages:(id)a0 title:(id)a1 subTitle:(id)a2;
- (id)initWithIconNames:(id)a0 title:(id)a1 subTitle:(id)a2;
- (id)initWithIconNames:(id)a0 title:(id)a1 subTitle:(id)a2 bannerText:(id)a3;
- (void)leftBarButtonTapped:(id)a0;
- (void)removeCellDatas:(id)a0 fromSection:(unsigned long long)a1 animated:(BOOL)a2;
- (void)rightBarButtonTapped:(id)a0;
- (void)updateContinueButtonStatus;
- (void)updateNavBarButtonType:(unsigned long long)a0 forButtonPosition:(unsigned long long)a1 enabled:(BOOL)a2;

@end
