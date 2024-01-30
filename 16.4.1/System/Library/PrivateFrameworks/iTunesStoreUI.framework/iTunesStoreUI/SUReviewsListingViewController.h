@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {
    SUButtonAccessoryView *_accessoryView;
}

- (void)reloadData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (id)_accessoryView;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_headerItem;
- (void)_reloadHeaderView;
- (BOOL)_canWriteReview;
- (void)_writeAReview:(id)a0;
- (id)newTermsAndConditionsFooter;
- (void)reloadForChangedRowCount:(long long)a0;

@end
