@class MTIntentAlarm;

@interface MTCreateAlarmIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) MTIntentAlarm *alarm;

+ (id)successIntentResponseWithAlarm:(id)a0;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
