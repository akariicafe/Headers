@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CPCoreApplicationHandler : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (class, nonatomic) id /* block */ openApplicationServiceFactory;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openApplicationService;
+ (void)launchAppWithBundleId:(id)a0 userActivityData:(id)a1 launchSuspended:(BOOL)a2 completion:(id /* block */)a3;

- (void).cxx_destruct;
- (id)init;

@end
