@class NSString;

@interface CDMMemoryMarisaTrie : NSObject <CDMBaseTrie> {
    struct unique_ptr<marisa::Trie, std::default_delete<marisa::Trie>> { struct __compressed_pair<marisa::Trie *, std::default_delete<marisa::Trie>> { struct Trie *__value_; } __ptr_; } _readOnlyTrie;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasPrefix:(id)a0;
- (id)initWithEntries:(id)a0;
- (unsigned long long)size;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)hasEntry:(id)a0;
- (id)traversePrefix:(id)a0;

@end
