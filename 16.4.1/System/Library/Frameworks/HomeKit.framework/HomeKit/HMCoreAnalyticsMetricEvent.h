@class NSString, NSError;

@interface HMCoreAnalyticsMetricEvent : HMFObject

@property (readonly, copy) NSString *name;
@property (retain) NSError *error;

- (id)initWithName:(id)a0;
- (id)eventPayload;
- (void).cxx_destruct;

@end
