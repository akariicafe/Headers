@class NSMutableDictionary, MRPendingMessageQueue, NSObject;
@protocol MRProtocolMessageQueueDelegate, MRProtocolMessageQueueDataSource, OS_dispatch_queue;

@interface MRProtocolMessageQueue : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    id<MRProtocolMessageQueueDataSource> _datasource;
    id<MRProtocolMessageQueueDelegate> _delegate;
    MRPendingMessageQueue *_pendingMessageQueue;
    NSMutableDictionary *_pendingReplyQueue;
}

@property (weak, nonatomic) id<MRProtocolMessageQueueDataSource> datasource;
@property (weak, nonatomic) id<MRProtocolMessageQueueDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)reply:(id)a0;
- (void)dealloc;
- (void)flush;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)a0;
- (void)enqueueMessage:(id)a0 expectedMessage:(unsigned long long)a1 reply:(id /* block */)a2 queue:(id)a3;

@end
