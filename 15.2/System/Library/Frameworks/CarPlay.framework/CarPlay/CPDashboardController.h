@class NSArray, NSString, NSXPCConnection;
@protocol CPDashboardProviding;

@interface CPDashboardController : NSObject <CPDashboardClientInterface>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<CPDashboardProviding> dashboardProvider;
@property (copy, nonatomic) NSArray *shortcutButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dashboardProvidingInterface;
+ (id)_dashboardClientInterface;

- (void)_invalidate;
- (void).cxx_destruct;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (id)_init;
- (void)handleActionForControlIdentifier:(id)a0;
- (void)_sceneConnect:(id)a0;
- (void)_connectToListenerEndpoint:(id)a0;

@end
