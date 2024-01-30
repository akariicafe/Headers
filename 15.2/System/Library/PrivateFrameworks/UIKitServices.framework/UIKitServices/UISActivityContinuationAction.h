@class NSString, NSData, NSDate;

@interface UISActivityContinuationAction : BSAction

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *activityTypeIdentifier;
@property (readonly, nonatomic) NSString *originatingDeviceType;
@property (readonly, nonatomic) NSString *originatingDeviceName;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSDate *lastUpdateTime;
@property (readonly, nonatomic) NSData *userActivityData;

- (id)initWithSettings:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;

@end
