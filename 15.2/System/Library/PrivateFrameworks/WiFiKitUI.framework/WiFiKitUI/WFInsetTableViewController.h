@interface WFInsetTableViewController : UITableViewController {
    BOOL _sectionContentInsetInitialized;
}

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)_isRegularWidth;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;

@end
