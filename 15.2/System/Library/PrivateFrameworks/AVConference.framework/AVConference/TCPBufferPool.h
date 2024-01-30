@interface TCPBufferPool : NSObject {
    int poolSize;
    struct tagBufferNode { char *x0; int x1; int x2; struct tagBufferNode *x3; } *head;
    struct tagBufferNode { char *x0; int x1; int x2; struct tagBufferNode *x3; } *tail;
    struct tagBufferNode { char *x0; int x1; int x2; struct tagBufferNode *x3; } *avail;
    int poolLock;
}

- (id)init;
- (void)dealloc;
- (void)monitorBufferPool;
- (char *)getBufferFromPool:(int)a0;
- (void)returnBufferToPool:(char *)a0;

@end
