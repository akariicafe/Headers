@class NSXPCConnection;

@interface WLKFederatedAnalyticsReporter : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)defaultFederatedAnalyticsReporter;

- (void).cxx_destruct;
- (void)_invalidationHandler;
- (void)reportPunchout:(id)a0;

@end
