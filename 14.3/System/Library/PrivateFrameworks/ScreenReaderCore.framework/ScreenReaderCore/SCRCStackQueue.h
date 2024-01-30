@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (BOOL)isEmpty;
- (id)dequeueObject;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enqueueObject:(id)a0;
- (id)objectEnumerator;
- (id)description;
- (id)popObject;
- (void)pushObject:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)topObject;
- (id)popObjectRetained;
- (id)dequeueObjectRetained;
- (void)pushArray:(id)a0;

@end
