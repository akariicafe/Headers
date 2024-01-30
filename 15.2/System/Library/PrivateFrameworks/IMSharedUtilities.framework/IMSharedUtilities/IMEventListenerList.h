@class NSMutableArray;

@interface IMEventListenerList : NSObject {
    NSMutableArray *_eventListeners;
}

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)removeObject:(id)a0;

@end
