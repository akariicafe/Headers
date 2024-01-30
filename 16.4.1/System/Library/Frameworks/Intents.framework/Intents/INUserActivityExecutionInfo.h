@class NSString;

@interface INUserActivityExecutionInfo : INExecutionInfo

@property (readonly, copy, nonatomic) NSString *userActivityType;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_initWithUserActivityType:(id)a0 launchableAppBundleId:(id)a1 containingAppBundleURL:(id)a2 extensionBundleId:(id)a3;
- (BOOL)canRunOnLocalDevice;
- (id)initWithUserActivityType:(id)a0 launchableAppBundleId:(id)a1;

@end
