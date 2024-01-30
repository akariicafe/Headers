@class NSMutableArray;

@interface UARPAccessoryMsgQueue : NSObject {
    NSMutableArray *_queue;
    BOOL _throttledInFlight;
}

- (id)init;
- (void).cxx_destruct;
- (void)resetThrottleQueue;
- (void)queueThrottleMessage:(id)a0 needsResponse:(BOOL)a1;
- (id)unqueueMessageIfClearToSend;
- (void)throttledMsgResponseRecvd;
- (BOOL)isThrottleQueueEmpty;

@end
