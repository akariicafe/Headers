@class NSXPCConnection, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PRRegulatoryAssistanceEndpoint : NSObject {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_conn;
}

+ (id)endpointWithQueue:(id)a0;

- (void)connectWithCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)provideIsoCode:(id)a0;
- (id)initInternalWithQueue:(id)a0;

@end
