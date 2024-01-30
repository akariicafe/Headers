@class NSString, SKProductPageViewController, SUBarButtonItem;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {
    SUBarButtonItem *_cancelButtonItem;
}

@property (weak, nonatomic) SKProductPageViewController *productPageViewController;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;

- (id)_cancelButtonItem;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetNavigationItem:(id)a0;
- (void)handleFailureWithError:(id)a0;
- (BOOL)presentDialogForError:(id)a0 pendUntilVisible:(BOOL)a1;
- (void)_addCancelButtonToNavigationItem:(id)a0;
- (void)_storeSheetCancelButtonAction:(id)a0;

@end
