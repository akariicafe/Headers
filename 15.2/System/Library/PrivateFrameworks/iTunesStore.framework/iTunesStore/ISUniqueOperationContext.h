@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (unsigned long long)countOfOperations;
- (id)init;
- (id)uniqueOperationForKey:(id)a0;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)addOperation:(id)a0;
- (BOOL)containsOperation:(id)a0;
- (void)removeOperation:(id)a0;

@end
