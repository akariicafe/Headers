@class _UIPrintMessageAndSpinnerView;

@interface UIPrinterSearchingView : UIView {
    BOOL _constraintsSet;
}

@property (weak, nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setSearching:(BOOL)a0;
- (void)updateFont;
- (void)searchTimeout;

@end
