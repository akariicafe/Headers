@class NSString, SYService, PBCodable, NSObject;
@protocol SYSyncEngineResponder, OS_os_activity, OS_os_transaction, OS_dispatch_queue;

@interface SYSyncEngine : NSObject <SYStateLoggable> {
    id<SYSyncEngineResponder> _responder;
    NSObject<OS_os_transaction> *_transaction;
}

@property (weak, nonatomic) id<SYSyncEngineResponder> responder;
@property (readonly, nonatomic) NSObject<OS_os_activity> *transportActivity;
@property (readonly, nonatomic) BOOL isInSession;
@property (readonly, nonatomic) BOOL buffersSessions;
@property (readonly, nonatomic) BOOL buffersHandshake;
@property (readonly, weak, nonatomic) SYService *service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL targetIsNearby;
@property (readonly, nonatomic) BOOL targetConnected;
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endSession;
- (id)initWithService:(id)a0 queue:(id)a1;
- (void)suspend;
- (void)dealloc;
- (BOOL)resume:(id *)a0;
- (void)beginSession;
- (void).cxx_destruct;
- (id)cancelMessagesReturningFailures:(id)a0;
- (void)enqueueSyncRequest:(id)a0 withMessageID:(unsigned short)a1 priority:(long long)a2 options:(id)a3 userContext:(id)a4 callback:(id /* block */)a5;
- (id)outputStreamWithMetadata:(id)a0 priority:(long long)a1 options:(id)a2 context:(id)a3 error:(id *)a4;

@end
