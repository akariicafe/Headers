@class NSObject;
@protocol CNLaunchServicesAdapter, OS_os_log;

@interface CNLaunchServices : NSObject

@property (retain, nonatomic) id<CNLaunchServicesAdapter> adapter;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0;
- (id)applicationForBundleIdentifier:(id)a0;
- (id)applicationsForUserActivityType:(id)a0;
- (void)openSensitiveURLInBackground:(id)a0 withOptions:(id)a1 completionHandler:(id /* block */)a2;
- (void)openUserActivityData:(id)a0 inApplication:(id)a1 completionHandler:(id /* block */)a2;
- (id)applicationsAvailableForHandlingURLScheme:(id)a0;

@end
