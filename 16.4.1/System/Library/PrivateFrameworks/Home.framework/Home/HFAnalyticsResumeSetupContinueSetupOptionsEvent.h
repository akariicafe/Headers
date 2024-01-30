@class NSString, NSNumber;

@interface HFAnalyticsResumeSetupContinueSetupOptionsEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *accessoryType;
@property (retain, nonatomic) NSNumber *resumeSetupOption;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
