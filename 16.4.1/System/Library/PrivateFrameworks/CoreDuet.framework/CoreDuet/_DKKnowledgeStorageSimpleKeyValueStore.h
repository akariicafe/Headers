@class _DKKnowledgeStorage, NSString;

@interface _DKKnowledgeStorageSimpleKeyValueStore : NSObject <_DKSimpleKeyValueStore> {
    _DKKnowledgeStorage *_storage;
    NSString *_domain;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;

@end
