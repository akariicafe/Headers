@class UILabel, NSString, UIActivityIndicatorView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularSetupActivatingViewController : TSOBTableWelcomeController <TSSetupFlowItem>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setUpLabel;
- (void)_setUpSpinner;
- (void)_spinnerStartAnimating;
- (void)_spinnerStopAnimating;

@end
