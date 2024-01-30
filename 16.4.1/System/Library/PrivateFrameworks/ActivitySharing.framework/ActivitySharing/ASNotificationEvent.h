@class NSString, NSUUID, NSDate;

@interface ASNotificationEvent : NSObject <ASCloudKitCodable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *friendUUID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSUUID *triggerUUID;
@property (nonatomic) long long triggerSnapshotIndex;

+ (id)achievementCompletionEventWithAchievement:(id)a0;
+ (id)deletedWorkoutEventWithUUID:(id)a0;
+ (id)goalCompletionEventWithActivitySummary:(id)a0;
+ (id)notificationEventWithRecord:(id)a0 friendUUID:(id)a1;
+ (id)workoutCompletionEventWithWorkout:(id)a0;

- (void).cxx_destruct;
- (id)recordWithZoneID:(id)a0;

@end
