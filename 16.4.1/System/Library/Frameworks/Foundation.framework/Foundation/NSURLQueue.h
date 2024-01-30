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

- (id)peek;
- (BOOL)isEmpty;
- (BOOL)remove:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (void)clear;
- (id)peekAt:(unsigned long long)a0;
- (long long)indexOf:(id)a0;
- (void)put:(id)a0;
- (void)setWaitOnTake:(BOOL)a0;
- (id)take;
- (BOOL)waitOnTake;

@end
