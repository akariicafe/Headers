@class UIViewController, NSSet, NSString, WFAlertPresentationSource;

@interface WFContactPickerCoordinator : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSSet *supportedPersonProperties;
@property (retain, nonatomic) WFAlertPresentationSource *presentationSource;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (id)supportedContactProperties;
- (void)presentHandlePickerForContact:(id)a0 completionHandler:(id /* block */)a1;
- (void)presentContactPickerWithCompletionHandler:(id /* block */)a0;
- (void)presentViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissPersonViewController;
- (void)finishWithContact:(id)a0;
- (id)contactWithMatchingPropertyAndMultivalueIndex:(id)a0;

@end
