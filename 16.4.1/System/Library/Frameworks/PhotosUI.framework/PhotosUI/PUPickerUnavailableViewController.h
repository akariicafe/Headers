@class NSError, PHPickerConfiguration;
@protocol _PUPickerUnavailableViewControllerDelegate;

@interface PUPickerUnavailableViewController : UIViewController

@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) PHPickerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSError *error;
@property (weak, nonatomic) id<_PUPickerUnavailableViewControllerDelegate> delegate;

+ (id)unavailableViewController:(unsigned long long)a0 configuration:(id)a1 error:(id)a2 delegate:(id)a3;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)unavailableTitle;
- (void)askDelegateToCancel;
- (void)askDelegateToRetry;
- (id)initWithReason:(unsigned long long)a0 configuration:(id)a1 error:(id)a2;
- (id)reasonDebugDescription;
- (id)unavailableButtonTitle;
- (id)unavailableKey;
- (id)unavailableMessage;
- (void)updateReason:(unsigned long long)a0 error:(id)a1;
- (void)updateUnavailableView;

@end
