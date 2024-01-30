@class NSString, NSDictionary;

@interface ADSubscriptionEvent : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *qToken;
@property (retain, nonatomic) NSString *sourceID;
@property (nonatomic) double eventTime;
@property (retain, nonatomic) NSDictionary *info;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 withQToken:(id)a1 withSourceID:(id)a2 withEventTime:(double)a3 withInfo:(id)a4;

@end
