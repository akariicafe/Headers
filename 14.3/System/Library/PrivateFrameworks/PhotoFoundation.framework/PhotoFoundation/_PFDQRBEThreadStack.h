@class PFDispatchQueue;

@interface _PFDQRBEThreadStack : NSObject {
    _PFDQRBEThreadStack *_next;
    unsigned long long _currentIndex;
    PFDispatchQueue *_activeQueues[8];
}

+ (void)initialize;
+ (id)stackForCurrentThread;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)pushQueue:(id)a0;
- (BOOL)containsQueue:(id)a0;
- (void)popQueue;

@end
