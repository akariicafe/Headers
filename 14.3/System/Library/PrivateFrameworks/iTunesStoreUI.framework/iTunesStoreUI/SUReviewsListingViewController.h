@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {
    SUButtonAccessoryView *_accessoryView;
}

- (void)reloadData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_headerItem;
- (id)_accessoryView;
- (void)_reloadHeaderView;
- (void)reloadForChangedRowCount:(long long)a0;
- (id)newTermsAndConditionsFooter;
- (void)_writeAReview:(id)a0;
- (BOOL)_canWriteReview;

@end
