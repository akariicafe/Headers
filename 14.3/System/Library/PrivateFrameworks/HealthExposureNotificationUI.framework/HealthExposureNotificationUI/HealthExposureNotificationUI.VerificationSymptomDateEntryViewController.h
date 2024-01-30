@interface HealthExposureNotificationUI.VerificationSymptomDateEntryViewController : OBTableWelcomeController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ healthAgencyModel;
    void /* unknown type, empty encoding */ hasSymptoms;
    void /* unknown type, empty encoding */ symptomOnsetDate;
    void /* unknown type, empty encoding */ isShowingDatePicker;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
}

- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didTapCancel;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (void)datePickerValueChanged:(id)a0;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;

@end
