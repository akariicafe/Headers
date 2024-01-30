@class HKOrganDonationCallToActionTableViewCell;
@protocol HKMedicalIDRegisteredOrganDonorTableItemDelegate;

@interface HKMedicalIDRegisteredOrganDonorTableItem : HKEmergencyCardTableItem {
    long long _organization;
}

@property (retain, nonatomic) HKOrganDonationCallToActionTableViewCell *notRegisteredCell;
@property (weak, nonatomic) id<HKMedicalIDRegisteredOrganDonorTableItemDelegate> delegate;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
- (void).cxx_destruct;
- (id)title;
- (id)titleForFooter;
- (BOOL)hasPresentableData;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (void)presentDonateLifeRegistrationSequence;
- (id)initInEditMode:(BOOL)a0 organDonationOrganization:(long long)a1;
- (id)organizationLogo;

@end
