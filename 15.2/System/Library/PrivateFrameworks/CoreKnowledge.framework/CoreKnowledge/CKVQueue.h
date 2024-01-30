@class CKVQueueNode;

@interface CKVQueue : NSObject {
    CKVQueueNode *_firstNode;
    CKVQueueNode *_lastNode;
}

- (id)dequeue;
- (void).cxx_destruct;
- (id)init;
- (void)enqueue:(id)a0;

@end
