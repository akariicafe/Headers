@class NSString, NSMutableDictionary, NSDateComponents, NSNumber, NSObject;
@protocol WDBuddyFlowUserInfoDelegate, OS_dispatch_queue;

@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate> {
    NSMutableDictionary *_dataEntryItems;
    NSObject<OS_dispatch_queue> *_queue;
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
- (id)_createDateOfBirthEntryItem;
- (id)_todayBirthdayDateComponents;
- (void)dataEntryItemDidUpdateValue:(id)a0;
- (id)_createSexEntryItem;
- (id)_dataEntryItemForRegistrantField:(unsigned long long)a0;
- (id)medicalIDRepresentation;
- (void)saveChangesToHealthStore:(id)a0 withMedicalIDTemplate:(id)a1 withMedicalIDCompletion:(id /* block */)a2 andSaveNameCompletion:(id /* block */)a3 andOverallCompletion:(id /* block */)a4;

@end
