@interface VSKeychainStore : NSObject

- (id)addItem:(id)a0 error:(id *)a1;
- (id)findItemsMatchingQuery:(id)a0 error:(id *)a1;
- (BOOL)deleteItemsMatchingQuery:(id)a0 error:(id *)a1;
- (BOOL)updateAttributes:(id)a0 ofItemsMatchingQuery:(id)a1 error:(id *)a2;

@end
