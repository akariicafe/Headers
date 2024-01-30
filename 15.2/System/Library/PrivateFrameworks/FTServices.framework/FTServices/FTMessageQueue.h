@class NSArray, IDSBaseMessage, CUTDeferredTaskQueue, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject {
    CUTDeferredTaskQueue *_timeoutTask;
}

@property (retain) NSMutableArray *_queue;
@property (retain) NSMutableArray *_addDates;
@property (readonly) IDSBaseMessage *topMessage;
@property (readonly) long long count;
@property (readonly) NSArray *messages;
@property (weak) id<FTMessageQueueDelegate> delegate;

- (id)dequeueTopMessage;
- (void)removeAllMessages;
- (BOOL)removeMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)messageForUniqueID:(unsigned long long)a0;
- (void)_timeoutHit;
- (BOOL)addMessage:(id)a0;
- (void)_setTimeout;
- (void)_clearTimeout;
- (BOOL)addMessageAtHeadOfQueue:(id)a0;

@end
