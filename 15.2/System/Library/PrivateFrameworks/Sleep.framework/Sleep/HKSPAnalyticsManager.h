@class HKSPAnalyticsStore;

@interface HKSPAnalyticsManager : NSObject

@property (retain, nonatomic) HKSPAnalyticsStore *analyticsStore;
@property (copy, nonatomic) id /* block */ ihaOptInStatusProvider;
@property (copy, nonatomic) id /* block */ analyticsEventConsumer;

+ (BOOL)isDiagnosticDataSubmissionAllowed;
+ (id)currentDeviceType;
+ (id)activePairedWatchProductType;

- (id)initWithUserDefaults:(id)a0 ihaOptInStatusProvider:(id /* block */)a1 analyticsEventConsumer:(id /* block */)a2;
- (id)initWithUserDefaults:(id)a0;
- (void)trackEvents:(id)a0;
- (BOOL)isImproveHealthAndActivitySubmissionAllowed;
- (void).cxx_destruct;
- (void)trackEvent:(id)a0;

@end
