@class NSArray, UIViewController, NSString;
@protocol HKEmergencyContactPickerDelegate;

@interface HKEmergencyContactPicker : NSObject <CNContactPickerDelegate>

@property (retain, nonatomic) UIViewController *owningViewController;
@property (weak, nonatomic) id<HKEmergencyContactPickerDelegate> delegate;
@property (nonatomic) BOOL isSecondaryProfile;
@property (retain, nonatomic) NSArray *suggestedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOwningViewController:(id)a0;
- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (id)_meContactIdentifier;
- (void)presentEmergencyContactPickerForMedicalIDDataIfPossible:(id)a0;
- (void)presentMaximumEmergencyContactAlert;

@end
