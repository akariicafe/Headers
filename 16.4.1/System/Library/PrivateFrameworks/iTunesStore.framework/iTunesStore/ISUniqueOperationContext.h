@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)addOperation:(id)a0;
- (BOOL)containsOperation:(id)a0;
- (unsigned long long)countOfOperations;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)uniqueOperationForKey:(id)a0;
- (id)init;
- (void)removeOperation:(id)a0;

@end
