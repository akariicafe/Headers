@class NSString, NSNumber;

@interface HFAnalyticsResumeSetupExitOptionsEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *accessoryType;
@property (retain, nonatomic) NSNumber *resumeSetupOption;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
