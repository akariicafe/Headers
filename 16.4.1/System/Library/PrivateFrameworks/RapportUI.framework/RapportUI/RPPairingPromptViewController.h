@class NSObject, UIActivityIndicatorView, UILabel, RPPINEntryView, UIButton;
@protocol OS_dispatch_source;

@interface RPPairingPromptViewController : UIViewController {
    NSObject<OS_dispatch_source> *_retryTimer;
    unsigned long long _retryDeadlineTicks;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) RPPINEntryView *pinEntryView;
@property (retain, nonatomic) UIActivityIndicatorView *progressSpinner;
@property (retain, nonatomic) UILabel *progressLabel;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ tryPasswordHandler;

+ (id)instantiateViewController;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_retryTimer;
- (void)handleCancelButton:(id)a0;
- (void)handlePINEntered:(id)a0;
- (void)updateWithFlags:(unsigned int)a0 throttleSeconds:(int)a1;

@end
