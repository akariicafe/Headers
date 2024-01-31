@class NSString, CNContactContainerPickerViewController, CNUIContainerContext;

@interface CNContactSelectContainersAction : CNContactAction <CNContactContainerPickerViewControllerDelegate>

@property (retain, nonatomic) CNContactContainerPickerViewController *containerPicker;
@property (retain, nonatomic) CNUIContainerContext *containerContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanupForDismissal;
- (void).cxx_destruct;
- (void)containerPicker:(id)a0 didFinishWithPickedContainers:(id)a1;
- (BOOL)containerPicker:(id)a0 shouldAllowDeselectionOfContainerWithIdentifier:(id)a1;
- (void)performActionWithContainerContext:(id)a0;

@end
