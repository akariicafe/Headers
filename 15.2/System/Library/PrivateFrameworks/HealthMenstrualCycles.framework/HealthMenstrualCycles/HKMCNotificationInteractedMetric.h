@class NSString, NSDictionary;

@interface HKMCNotificationInteractedMetric : NSObject

@property (class, readonly, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSDictionary *eventPayload;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *action;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 action:(id)a1;

@end
