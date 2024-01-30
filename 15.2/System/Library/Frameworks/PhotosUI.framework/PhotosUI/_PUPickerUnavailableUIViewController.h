@class PUPickerConfiguration, NSError, PXContentUnavailableView;
@protocol _PUPickerUnavailableUIViewControllerDelegate;

@interface _PUPickerUnavailableUIViewController : UIViewController

@property (readonly, nonatomic) PXContentUnavailableView *unavailableView;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, nonatomic) PUPickerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSError *error;
@property (weak, nonatomic) id<_PUPickerUnavailableUIViewControllerDelegate> delegate;

+ (id)unavailableUIViewControllerEmbeddedInNavigationController:(unsigned long long)a0 configuration:(id)a1 error:(id)a2 delegate:(id)a3;
+ (id)unavailableUIViewController:(unsigned long long)a0 configuration:(id)a1 error:(id)a2 delegate:(id)a3;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateReason:(unsigned long long)a0 error:(id)a1;
- (id)init;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithReason:(unsigned long long)a0 configuration:(id)a1 error:(id)a2;
- (void)updateUnavailableView;
- (id)unavailableTitle;
- (id)unavailableMessage;
- (id)unavailableButtonTitle;
- (id)reasonDebugDescription;
- (void)askDelegateToCancel;
- (void)askDelegateToRetry;

@end
