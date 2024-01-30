@class HKFitzpatrickSkinTypeObject, NSString, HKCardioFitnessMedicationsUseObject, NSArray, NSDateComponents, HKBloodTypeObject, HKBiologicalSexObject, HKQuantity, HKWheelchairUseObject;

@interface HKDemographicsInformationWrapper : NSObject

@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSDateComponents *dateOfBirthComponents;
@property (copy, nonatomic) HKBiologicalSexObject *biologicalSexObject;
@property (copy, nonatomic) HKQuantity *heightQuantity;
@property (copy, nonatomic) HKQuantity *weightQuantity;
@property (copy, nonatomic) HKFitzpatrickSkinTypeObject *fitzpatrickSkinTypeObject;
@property (copy, nonatomic) HKBloodTypeObject *bloodTypeObject;
@property (copy, nonatomic) HKWheelchairUseObject *wheelchairUseObject;
@property (copy, nonatomic) HKCardioFitnessMedicationsUseObject *cardioFitnessMedicationsUseObject;
@property (copy, nonatomic) NSArray *postalAddresses;
@property (copy, nonatomic) NSArray *emailAddresses;

- (void).cxx_destruct;

@end
