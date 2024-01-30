@class NSString, NSDictionary;

@interface BYAnalyticsEvent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *payload;
@property (nonatomic) BOOL persist;

+ (id)eventWithName:(id)a0 withPayload:(id)a1 persist:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;

@end
