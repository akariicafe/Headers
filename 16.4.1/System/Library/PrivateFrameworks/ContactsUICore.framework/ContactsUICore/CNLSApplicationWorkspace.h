@class NSString;
@protocol CNSchedulerProvider;

@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace>

@property (retain, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)inProcessLaunchServices;
+ (id)launchServices;
+ (id)remoteAdapter;

- (id)initWithSchedulerProvider:(id)a0;
- (id)observableForApplicationsChangedWithSchedulerProvider:(id)a0;
- (void)openUserActivity:(id)a0 inApplication:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)applicationsAvailableForHandlingURLScheme:(id)a0;
- (void)openSensitiveURLInBackground:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (id)applicationsForUserActivityType:(id)a0;
- (id)applicationForBundleIdentifier:(id)a0;
- (id)init;
- (void)openSensitiveURLInBackground:(id)a0 withOptions:(id)a1;
- (void).cxx_destruct;

@end
