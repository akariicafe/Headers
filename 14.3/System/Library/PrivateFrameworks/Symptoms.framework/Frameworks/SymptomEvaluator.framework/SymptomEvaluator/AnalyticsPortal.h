@class NSXPCListener, ServiceImpl;

@interface AnalyticsPortal : NSObject {
    NSXPCListener *listener;
    ServiceImpl *si;
}

+ (id)sharedInstance;
+ (void)shutdown;
+ (void)setListeningPort:(const char *)a0 queue:(id)a1;
+ (void)clientTransactionsRelease;

- (void)shutdown;
- (void).cxx_destruct;
- (void)setListeningPort:(const char *)a0 queue:(id)a1;
- (void)clientTransactionsRelease;

@end
