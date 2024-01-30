@class CNContact, NSString, UIImage, UIImagePickerController, CNContactPickerViewController;

@interface UIAssignToContactActivity : UIActivity <CNContactPickerDelegate, CNContactViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) CNContactPickerViewController *peoplePicker;
@property (retain, nonatomic) CNContact *person;
@property (retain, nonatomic) UIImagePickerController *imagePickerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_xpcAttributes;
+ (BOOL)_isCapabilityBasedActivity;

- (id)activityType;
- (void)_cleanup;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (BOOL)contactViewController:(id)a0 shouldPerformDefaultActionForContactProperty:(id)a1;
- (id)activityViewController;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;

@end
