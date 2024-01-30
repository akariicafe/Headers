@class NSXPCConnection;
@protocol MOAnalyticsManagerXPCProtocol;

@interface MOAnalyticsManager : NSObject {
    NSXPCConnection *connection;
    id<MOAnalyticsManagerXPCProtocol> proxy;
}

+ (id)defaultManager;

- (id)context;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPhotoAnalyticsMetricsWithHandler:(id /* block */)a0;

@end
