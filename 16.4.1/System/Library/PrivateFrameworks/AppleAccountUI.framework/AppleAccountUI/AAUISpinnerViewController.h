@class UILabel, UIActivityIndicatorView;

@interface AAUISpinnerViewController : UIViewController {
    UIActivityIndicatorView *_spinnerView;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic, getter=isSpinning) BOOL spinning;

- (void)_commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
