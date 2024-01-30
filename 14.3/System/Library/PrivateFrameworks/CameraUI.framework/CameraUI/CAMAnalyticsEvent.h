@class NSString, NSMutableDictionary;

@interface CAMAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_eventMap;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *eventName;

- (void)publish;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;

@end
