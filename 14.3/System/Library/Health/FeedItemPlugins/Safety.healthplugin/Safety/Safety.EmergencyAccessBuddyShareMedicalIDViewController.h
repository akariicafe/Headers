@interface Safety.EmergencyAccessBuddyShareMedicalIDViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ shareButton;
    void /* unknown type, empty encoding */ dontShareButton;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)didTapCancel:(id)a0;
- (void)viewDidLoad;
- (void)didTapLearnMore:(id)a0;
- (void)didTapShare:(id)a0;
- (void)didTapDontShare:(id)a0;

@end
