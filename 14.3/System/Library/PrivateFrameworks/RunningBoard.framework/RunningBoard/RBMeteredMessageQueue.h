@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RBMeteredMessageQueue : NSObject {
    NSMutableDictionary *_pendingMessagesByIdentifier;
    BOOL _isProcessingPendingMessages;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (copy, nonatomic) id /* block */ messageSendBlock;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsMessageWithIdentifier:(id)a0;
- (void)enqueueIdentifier:(id)a0 message:(id)a1;

@end
