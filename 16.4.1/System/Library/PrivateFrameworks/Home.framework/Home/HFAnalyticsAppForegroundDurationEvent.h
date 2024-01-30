@class NSNumber, NSString;

@interface HFAnalyticsAppForegroundDurationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *foregroundDuration;
@property (nonatomic) BOOL userHasAccessories;
@property (retain, nonatomic) NSString *processName;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
