@class NSString;

@interface INUserActivityExecutionInfo : INExecutionInfo

@property (readonly, copy, nonatomic) NSString *userActivityType;

+ (void)initialize;

- (id)_initWithUserActivityType:(id)a0 launchableAppBundleId:(id)a1 containingAppBundleURL:(id)a2 extensionBundleId:(id)a3;
- (void).cxx_destruct;
- (id)initWithUserActivityType:(id)a0 launchableAppBundleId:(id)a1;
- (BOOL)canRunOnLocalDevice;

@end
