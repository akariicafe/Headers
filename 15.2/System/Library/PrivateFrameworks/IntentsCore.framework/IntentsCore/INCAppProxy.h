@class INCExtensionConnection;

@interface INCAppProxy : NSObject

@property (readonly, weak, nonatomic) INCExtensionConnection *_connection;

+ (void)initialize;
+ (BOOL)shouldLaunchAppInBackgroundWithIntent:(id)a0 intentResponse:(id)a1;

- (id)_initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)launchAppInBackground:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)launchAppInBackground:(BOOL)a0 restrictAppsToCarPlay:(BOOL)a1 userActivityIdentifier:(id)a2 completionHandler:(id /* block */)a3;

@end
