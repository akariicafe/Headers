@class SiriAnalyticsXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsRemoteService : NSObject <SiriAnalyticsService> {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCConnection *_connection;
}

- (id)initWithMachServiceName:(id)a0;
- (void).cxx_destruct;
- (void)barrierWithCompletion:(id /* block */)a0;
- (id)_packageMessageForXPC:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2;
- (void)emitMessage:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2 completion:(id /* block */)a3;
- (void)resolvePartialMessage:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2 completion:(id /* block */)a3;
- (void)enqueueLargeMessageObjectFromPath:(id)a0 dataUploadEvent:(id)a1 completion:(id /* block */)a2;

@end
