@interface HealthExperienceUI.EmergencyAccessBuddyStartViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ emergencyStatus;
    void /* unknown type, empty encoding */ medicalIDStatus;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)didTapCancel:(id)a0;
- (void)didTapNext:(id)a0;
- (void)didTapReviewLater;

@end
