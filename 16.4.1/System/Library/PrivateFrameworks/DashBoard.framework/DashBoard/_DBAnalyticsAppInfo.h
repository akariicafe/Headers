@class NSString, DBApplicationInfo;

@interface _DBAnalyticsAppInfo : _DBAnalyticsTimeAccumulator

@property (readonly, nonatomic) DBApplicationInfo *appInfo;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) unsigned long long category;
@property (nonatomic) BOOL wasVisibleBeforeCarScreen;
@property (nonatomic) BOOL wasVisibleInDashboardBeforeCarScreen;
@property (nonatomic) BOOL wasVisibleBeforeSiri;
@property (nonatomic) unsigned long long numberOfSiriPresentations;
@property (nonatomic) unsigned long long dashboardWidgetType;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithAppInfo:(id)a0 policyEvaluator:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 appDeclaration:(id)a1 policyEvaluator:(id)a2;
- (void)startCountingDashboardVisibleTime;
- (void)startCountingVisibleTime;
- (void)stopCountingDashboardVisibleTime;
- (void)stopCountingVisibleTime;

@end
