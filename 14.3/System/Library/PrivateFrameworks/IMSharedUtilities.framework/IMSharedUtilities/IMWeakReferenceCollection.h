@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray *_list;
}

- (id)init;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (BOOL)containsObject:(id)a0;

@end
