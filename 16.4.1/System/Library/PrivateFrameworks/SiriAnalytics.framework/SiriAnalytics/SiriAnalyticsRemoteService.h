@class SiriAnalyticsXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsRemoteService : NSObject <SiriAnalyticsService> {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCConnection *_connection;
}

- (id)_packageMessageForXPC:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2;
- (void)emitMessage:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2 completion:(id /* block */)a3;
- (void)sensitiveCondition:(int)a0 endedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)enqueueLargeMessageObjectFromPath:(id)a0 dataUploadEvent:(id)a1 completion:(id /* block */)a2;
- (id)initWithMachServiceName:(id)a0;
- (void)sensitiveCondition:(int)a0 startedAt:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)barrierWithCompletion:(id /* block */)a0;
- (void)resolvePartialMessage:(id)a0 timestamp:(unsigned long long)a1 isolatedStreamUUID:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
