@interface ML3QueryResultSet_BackingStore : NSObject {
    struct vector<long long, std::allocator<long long>> { long long *__begin_; long long *__end_; struct __compressed_pair<long long *, std::allocator<long long>> { long long *__value_; } __end_cap_; } _persistentIDs;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _sections;
}

@property (readonly, nonatomic) unsigned long long count;

- (id).cxx_construct;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)persistentIDAtIndex:(unsigned long long)a0;
- (void)reverseEnumerateSectionsUsingBlock:(id /* block */)a0;
- (id)backingStoreByRemovingPersistentIDs:(const void *)a0;
- (BOOL)containsPersistentIDs:(const void *)a0;
- (void)reverseEnumeratePersistentIDsUsingBlock:(id /* block */)a0;

@end
