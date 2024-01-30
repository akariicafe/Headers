@class NSError, PXContentUnavailableView;
@protocol _PUPickerUnavailableUIViewControllerDelegate;

@interface _PUPickerUnavailableUIViewController : UIViewController

@property (readonly, nonatomic) PXContentUnavailableView *unavailableView;
@property (readonly, nonatomic) unsigned long long reason;
@property (readonly, copy, nonatomic) NSError *error;
@property (weak, nonatomic) id<_PUPickerUnavailableUIViewControllerDelegate> delegate;

+ (id)unavailableUIViewController:(unsigned long long)a0 error:(id)a1 delegate:(id)a2;
+ (id)unavailableUIViewControllerEmbeddedInNavigationController:(unsigned long long)a0 error:(id)a1 delegate:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithReason:(unsigned long long)a0 error:(id)a1;
- (void)updateUnavailableView;
- (id)unavailableTitle;
- (id)unavailableMessage;
- (id)unavailableButtonTitle;
- (id)reasonDebugDescription;
- (void)askDelegateToCancel;
- (void)askDelegateToRetry;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)updateReason:(unsigned long long)a0 error:(id)a1;
- (void)viewDidLoad;

@end
