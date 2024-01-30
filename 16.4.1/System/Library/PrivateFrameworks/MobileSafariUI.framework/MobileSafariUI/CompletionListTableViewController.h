@class UIView, _UIVisualEffectBackdropView, UITableViewHeaderFooterView;

@interface CompletionListTableViewController : SFPopoverSizingTableViewController {
    _UIVisualEffectBackdropView *_headerBackdropCaptureView;
    double _keyboardBottomInset;
}

@property (readonly, nonatomic) UITableViewHeaderFooterView *defaultHeaderFooterView;
@property (readonly, nonatomic) UIView *defaultHeaderFooterBackgroundView;

+ (id)tableViewCellForSizeEstimation;

- (void)keyboardDidChangeFrame:(id)a0;
- (void)updateContentInsets;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewIsAppearing:(BOOL)a0;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)a0;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;

@end
