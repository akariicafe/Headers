@class NSString, NSError;

@interface HMCoreAnalyticsMetricEvent : HMFObject

@property (readonly, copy) NSString *name;
@property (retain) NSError *error;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
