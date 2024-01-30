@class NSString, NSDictionary;

@interface BYAnalyticsEvent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *payload;
@property (nonatomic) BOOL persist;

+ (id)eventWithName:(id)a0 withPayload:(id)a1 persist:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;

@end
