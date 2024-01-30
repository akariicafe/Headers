@class NSData, NSString, NSUserActivity;

@interface WFOpenUserActivityAction : WFAction <WFStandaloneShortcutAction>

@property (readonly, copy, nonatomic) NSData *activityData;
@property (readonly, copy, nonatomic) NSData *activityImageData;
@property (readonly, copy, nonatomic) NSString *activitySubtitle;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *launchableAppBundleId;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (copy, nonatomic) NSString *launchOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userActivityActionWithShortcut:(id)a0 launchOrigin:(id)a1 error:(id *)a2;
+ (void)createActionWithUserActivity:(id)a0 appBundleIdentifier:(id)a1 launchOrigin:(id)a2 completionHandler:(id /* block */)a3;
+ (void)createActionWithIntent:(id)a0 completionHandler:(id /* block */)a1;

- (id)appIdentifier;
- (void).cxx_destruct;
- (id)localizedSubtitle;
- (id)localizedName;
- (id)serializedParameters;
- (id)name;
- (id)metricsIdentifier;
- (void)generateShortcutRepresentation:(id /* block */)a0;
- (void)generateStandaloneShortcutRepresentation:(id /* block */)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)disabledPlatformsForUserActivityWithType:(id)a0;

@end
