@interface WFInsetTableViewController : UITableViewController {
    BOOL _sectionContentInsetInitialized;
}

- (BOOL)_isRegularWidth;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end
