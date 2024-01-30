@interface ActivityPickerRemoteViewController : _UIRemoteViewController <FamilyControls.ActivityPickerClientInterface> {
    void /* unknown type, empty encoding */ didSelectCallback;
    void /* unknown type, empty encoding */ didCancelCallback;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void)didCancel;
- (void)didSelectWithApplications:(id)a0 categories:(id)a1 webDomains:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
