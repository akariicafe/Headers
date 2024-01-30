@class UIView, _UIVisualEffectBackdropView, UITableViewHeaderFooterView;

@interface CompletionListTableViewController : _SFPopoverSizingTableViewController {
    _UIVisualEffectBackdropView *_headerBackdropCaptureView;
    double _keyboardBottomInset;
}

@property (readonly, nonatomic) UITableViewHeaderFooterView *defaultHeaderFooterView;
@property (readonly, nonatomic) UIView *defaultHeaderFooterBackgroundView;

+ (id)tableViewCellForSizeEstimation;

- (void)viewDidLoad;
- (void)viewIsAppearing:(BOOL)a0;
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyboardDidChangeFrame:(id)a0;
- (void).cxx_destruct;
- (void)updateContentInsets;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;

@end
