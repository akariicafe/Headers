@class NSString, NSDictionary;

@interface HKMCNotificationSentMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (retain, nonatomic) NSString *category;

- (id)initWithCategory:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
