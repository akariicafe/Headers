@class NSString;

@interface AMDHealthKitWorkoutEvent : AMDBaseEvent

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *activityUUID;
@property (nonatomic) long long eventTime;
@property (nonatomic) short eventType;
@property (nonatomic) BOOL isFirstPartyDonation;
@property (nonatomic) BOOL isIndoor;
@property (nonatomic) BOOL isUpdate;

+ (id)fetchRequest;
+ (BOOL)validateInput:(id)a0;

- (void)populateRecord:(id)a0;

@end
