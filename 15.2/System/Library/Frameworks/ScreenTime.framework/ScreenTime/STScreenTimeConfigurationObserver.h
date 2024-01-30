@class STScreenTimeConfiguration, NSXPCConnection;

@interface STScreenTimeConfigurationObserver : NSObject

@property (readonly) NSXPCConnection *xpcConnection;
@property (retain) STScreenTimeConfiguration *configuration;
@property int notificationToken;

- (void)stopObserving;
- (void)startObserving;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_requestConfiguration;
- (void)_updateWithConfiguration:(id)a0;
- (id)initWithUpdateQueue:(id)a0;

@end
