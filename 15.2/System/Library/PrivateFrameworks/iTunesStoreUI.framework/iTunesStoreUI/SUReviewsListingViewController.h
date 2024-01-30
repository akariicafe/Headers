@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {
    SUButtonAccessoryView *_accessoryView;
}

- (void)reloadData;
- (id)_accessoryView;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)_reloadHeaderView;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)_headerItem;
- (void)reloadForChangedRowCount:(long long)a0;
- (id)newTermsAndConditionsFooter;
- (void)_writeAReview:(id)a0;
- (BOOL)_canWriteReview;

@end
