@class CKVQueueNode;

@interface CKVQueue : NSObject {
    CKVQueueNode *_firstNode;
    CKVQueueNode *_lastNode;
}

- (void)enqueue:(id)a0;
- (id)dequeue;
- (id)init;
- (void).cxx_destruct;

@end
