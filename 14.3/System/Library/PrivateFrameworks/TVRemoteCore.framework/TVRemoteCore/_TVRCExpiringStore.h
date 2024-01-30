@class NSMutableSet, NSMapTable;

@interface _TVRCExpiringStore : NSObject {
    NSMutableSet *_store;
    NSMapTable *_identifierToBlockMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)containsIdentifier:(id)a0;
- (void)removeIdentifier:(id)a0;
- (void)_removeIdentifierAndPerformCompletion:(id)a0;
- (void)addIdentifier:(id)a0 withExpiration:(double)a1 completion:(id /* block */)a2;

@end
