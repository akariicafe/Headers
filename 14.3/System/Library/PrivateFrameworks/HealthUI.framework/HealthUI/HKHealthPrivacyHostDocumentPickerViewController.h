@protocol HKHealthPrivacyHostDocumentPickerViewControllerDelegate, HKHealthPrivacyServiceRemoteDocumentPickerViewController;

@interface HKHealthPrivacyHostDocumentPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController>

@property (readonly, nonatomic) id<HKHealthPrivacyServiceRemoteDocumentPickerViewController> _healthPrivacyServiceViewControllerProxy;
@property (weak, nonatomic) id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate> delegate;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)didFinishWithError:(id)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)setPromptSession:(id)a0;

@end
