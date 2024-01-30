@class NSArray, _HKMedicalIDData, HKCoreTelephonyUtilities, _HKEmergencyContact, HKEmergencyContactPicker, UIViewController;
@protocol HKMedicalIDEmergencyContactFlowDelegate;

@interface HKMedicalIDEmergencyContactFlow : NSObject <HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate> {
    _HKMedicalIDData *_medicalIDData;
    _HKEmergencyContact *_selectedContact;
    HKEmergencyContactPicker *_contactPicker;
    NSArray *_suggestedContacts;
}

@property (retain, nonatomic) HKCoreTelephonyUtilities *coreTelephonyUtilities;
@property (retain, nonatomic) UIViewController *owningViewController;
@property (weak, nonatomic) id<HKMedicalIDEmergencyContactFlowDelegate> delegate;
@property (nonatomic) BOOL isSecondaryProfile;
@property (nonatomic) BOOL shouldShowSuggestedContacts;

- (void)setSuggestedContacts:(id)a0;
- (void).cxx_destruct;
- (void)_didSelectContact:(id)a0 property:(id)a1;
- (void)emergencyContactPicker:(id)a0 didSelectContact:(id)a1;
- (void)emergencyContactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)emergencyContactRelationshipPicker:(id)a0 didChooseRelationshipNamed:(id)a1;
- (void)emergencyContactRelationshipPickerDidCancel:(id)a0;
- (id)initWithPresentingViewController:(id)a0 forMedicalIDData:(id)a1;
- (void)presentEmergencyContactFlow;

@end
