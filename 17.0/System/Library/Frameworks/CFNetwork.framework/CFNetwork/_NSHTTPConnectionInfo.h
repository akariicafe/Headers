@class NSURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface _NSHTTPConnectionInfo : NSObject {
    struct HTTPConnectionInfo { void /* function */ **x0; } *_httpConnectionInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURLSession *_session;
}

@property (readonly) BOOL isValid;

- (void).cxx_destruct;
- (void)sendPingWithReceiveHandler:(id /* block */)a0;

@end
