@class NSURLQueueNode;

@interface NSURLQueue : NSObject {
    unsigned long long count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

+ (id)newNode;

- (void)put:(id)a0;
- (id)take;
- (BOOL)remove:(id)a0;
- (id)peekAt:(unsigned long long)a0;
- (void)clear;
- (long long)indexOf:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (BOOL)waitOnTake;
- (void)dealloc;
- (void)setWaitOnTake:(BOOL)a0;
- (id)peek;
- (unsigned long long)count;

@end
