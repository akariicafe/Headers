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

- (BOOL)addMessage:(id)a0;
- (BOOL)addMessageAtHeadOfQueue:(id)a0;
- (id)messageForUniqueID:(unsigned long long)a0;
- (void)_timeoutHit;
- (void)_setTimeout;
- (void)removeAllMessages;
- (BOOL)removeMessage:(id)a0;
- (id)init;
- (void)_clearTimeout;
- (id)dequeueTopMessage;
- (void).cxx_destruct;

@end
