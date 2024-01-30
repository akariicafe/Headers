@class UILabel, UIActivityIndicatorView;

@interface AAUISpinnerViewController : UIViewController {
    UIActivityIndicatorView *_spinnerView;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic, getter=isSpinning) BOOL spinning;

- (void)_commonInit;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
