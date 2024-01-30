@class NSMutableArray;

@interface IMEventListenerList : NSObject {
    NSMutableArray *_eventListeners;
}

- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;

@end
