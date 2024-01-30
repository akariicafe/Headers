@class NSString, NSDictionary, HKQuantity;

@interface HDSPWakeUpResultsNotification : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) HKQuantity *goalAchieved;
@property (readonly, nonatomic) long long endMorningIndex;
@property (readonly, nonatomic) long long notificationVariant;
@property (readonly, copy, nonatomic) NSString *userFirstName;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)goalAchievedQuantityForCategory:(unsigned long long)a0 userInfo:(id)a1;
+ (id)goalAchievedUserInfoKeyForCategory:(unsigned long long)a0;
+ (id)wakeUpResultsNotificationFromUserInfo:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToNotification:(id)a0;
- (long long)goalAchievedUserInfoValue;
- (id)initWithCategory:(unsigned long long)a0 endMorningIndex:(long long)a1 goalAchieved:(id)a2 notificationVariant:(long long)a3 userFirstName:(id)a4;
- (BOOL)isOneNight;

@end
