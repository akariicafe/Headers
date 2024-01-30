@class NSString, UIViewController;
@protocol HKEmergencyContactPickerDelegate;

@interface HKEmergencyContactPicker : NSObject <CNContactPickerDelegate>

@property (retain, nonatomic) UIViewController *owningViewController;
@property (weak, nonatomic) id<HKEmergencyContactPickerDelegate> delegate;
@property (nonatomic) BOOL isSecondaryProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (id)initWithOwningViewController:(id)a0;
- (void)presentEmergencyContactPickerForMedicalIDData:(id)a0;
- (id)_meContactIdentifier;

@end
