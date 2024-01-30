@class HKSPAnalyticsStore;

@interface HKSPAnalyticsManager : NSObject

@property (retain, nonatomic) HKSPAnalyticsStore *analyticsStore;

+ (BOOL)isImproveHealthAndActivitySubmissionAllowed;
+ (BOOL)isDiagnosticDataSubmissionAllowed;
+ (id)currentDeviceType;
+ (id)activePairedWatchProductType;

- (void).cxx_destruct;
- (void)trackEvents:(id)a0;
- (void)trackEvent:(id)a0;
- (id)initWithUserDefaults:(id)a0;

@end
