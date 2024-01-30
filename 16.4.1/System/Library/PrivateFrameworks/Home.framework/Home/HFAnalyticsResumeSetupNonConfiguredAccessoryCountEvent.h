@class NSNumber, NSString;

@interface HFAnalyticsResumeSetupNonConfiguredAccessoryCountEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *nonConfiguredAccessoryCount;
@property (retain, nonatomic) NSNumber *nonConfiguredBridgeCount;
@property (retain, nonatomic) NSNumber *nonConfiguredBridgedCount;
@property (retain, nonatomic) NSString *homeID;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
