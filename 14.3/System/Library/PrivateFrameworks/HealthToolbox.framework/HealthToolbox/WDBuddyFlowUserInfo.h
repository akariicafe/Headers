@class NSString, NSMutableDictionary, NSDateComponents, NSNumber;
@protocol WDBuddyFlowUserInfoDelegate;

@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate> {
    NSMutableDictionary *_dataEntryItems;
}

@property (retain, nonatomic) NSNumber *originalHeightInCm;
@property (retain, nonatomic) NSNumber *originalWeightInKg;
@property (weak, nonatomic) id<WDBuddyFlowUserInfoDelegate> delegate;
@property (retain, nonatomic) NSString *firstName;
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents;
@property (retain, nonatomic) NSNumber *sex;
@property (retain, nonatomic) NSNumber *heightInCm;
@property (retain, nonatomic) NSNumber *weightInKg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buddyFlowUserInfoWithDemographicsInformation:(id)a0;

- (id)_medicalIDName;
- (id)init;
- (void).cxx_destruct;
- (id)defaultDataEntryItems;
- (void)dataEntryItemDidUpdateValue:(id)a0;
- (id)_createDateOfBirthEntryItem;
- (id)_todayBirthdayDateComponents;
- (id)_dataEntryItemForRegistrantField:(unsigned long long)a0;
- (id)_createSexEntryItem;
- (id)medicalIDRepresentation;
- (void)saveChangesToHealthStore:(id)a0 withMedicalIDTemplate:(id)a1;

@end
