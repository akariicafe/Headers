@class NSString, NSDictionary;

@interface OBAnalyticsEvent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *payload;

+ (id)eventWithName:(id)a0 withPayload:(id)a1;

- (id)description;
- (void).cxx_destruct;

@end
