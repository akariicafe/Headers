@class UITableView;

@interface WFInsetViewController : UIViewController {
    BOOL _sectionContentInsetInitialized;
}

@property (weak, nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (BOOL)_isRegularWidth;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end
