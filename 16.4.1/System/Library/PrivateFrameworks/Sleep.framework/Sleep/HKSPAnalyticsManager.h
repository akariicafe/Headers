@class HKSPAnalyticsStore;

@interface HKSPAnalyticsManager : NSObject

@property (retain, nonatomic) HKSPAnalyticsStore *analyticsStore;
@property (copy, nonatomic) id /* block */ ihaOptInStatusProvider;
@property (copy, nonatomic) id /* block */ diagnosticsOptInStatusProvider;
@property (copy, nonatomic) id /* block */ analyticsEventConsumer;

+ (id)activePairedWatchProductType;
+ (id)currentDeviceType;
+ (BOOL)defaultIsDiagnosticDataSubmissionAllowed;

- (void)trackEvents:(id)a0;
- (id)initWithUserDefaults:(id)a0;
- (void)trackEvent:(id)a0;
- (BOOL)isImproveHealthAndActivitySubmissionAllowed;
- (id)initWithUserDefaults:(id)a0 ihaOptInStatusProvider:(id /* block */)a1 diagnosticsOptInStatusProvider:(id /* block */)a2 analyticsEventConsumer:(id /* block */)a3;
- (BOOL)isDiagnosticDataSubmissionAllowed;
- (void).cxx_destruct;

@end
