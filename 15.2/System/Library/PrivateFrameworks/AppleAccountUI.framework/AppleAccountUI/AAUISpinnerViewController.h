@class UILabel, UIActivityIndicatorView;

@interface AAUISpinnerViewController : UIViewController {
    UIActivityIndicatorView *_spinnerView;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic, getter=isSpinning) BOOL spinning;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
