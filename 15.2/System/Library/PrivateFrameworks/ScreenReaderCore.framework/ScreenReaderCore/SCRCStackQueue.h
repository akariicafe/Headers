@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (id)objectEnumerator;
- (void)pushObject:(id)a0;
- (void)enqueueObject:(id)a0;
- (id)dequeueObject;
- (id)popObject;
- (void)removeAllObjects;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)dealloc;
- (id)topObject;
- (id)popObjectRetained;
- (id)dequeueObjectRetained;
- (void)pushArray:(id)a0;

@end
