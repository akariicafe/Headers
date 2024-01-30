@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WCAClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _changeCounter;
}

@property (retain, nonatomic) NSXPCConnection *connectionToService;

+ (id)sharedClient;

- (void)fetchWiFiAssetsFromServer;
- (void)_establishDaemonConnection;
- (void)_invalidateDaemonConnectionIfPossible;
- (void)executeFetchRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
