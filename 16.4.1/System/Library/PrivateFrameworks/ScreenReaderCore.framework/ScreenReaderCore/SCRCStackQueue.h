@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {
    _SCRCStackNode *_firstNode;
    _SCRCStackNode *_lastNode;
    unsigned long long _count;
}

- (BOOL)isEmpty;
- (void)enqueueObject:(id)a0;
- (id)objectEnumerator;
- (id)dequeueObject;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)popObject;
- (void)pushObject:(id)a0;
- (id)topObject;
- (void)_safeReleaseAllObjects;
- (id)dequeueObjectRetained;
- (id)popObjectRetained;
- (void)pushArray:(id)a0;

@end
