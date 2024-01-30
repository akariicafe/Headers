@class NSString, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface APSTaskClient : NSObject {
    NSXPCConnection *_connection;
    NSMutableArray *_outstandingDNSRequests;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSString *_environment;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)resolveDNS:(id)a0;
- (void)_clearOutstandingTasks:(long long)a0;
- (void)_timeoutOutstandingRequests;
- (id)initWithEnvironment:(id)a0 queue:(id)a1;
- (id)_findDNSRequestForHostname:(id)a0;

@end
