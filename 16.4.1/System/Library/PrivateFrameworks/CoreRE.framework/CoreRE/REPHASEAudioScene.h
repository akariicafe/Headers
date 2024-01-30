@class REPHASEContext, PHASEListener;

@interface REPHASEAudioScene : NSObject {
    struct unique_ptr<re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *, std::function<void (re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)> { struct __value_func<void (re::HashTable<unsigned long long, REPHASEEntity *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _entities;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *, std::function<void (re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)> { struct __value_func<void (re::HashTable<unsigned long long, PHASEListener *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _listeners;
    struct unique_ptr<re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> { struct __compressed_pair<re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *, std::function<void (re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> { void *__value_; struct function<void (re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)> { struct __value_func<void (re::HashTable<unsigned long long, PHASEObject *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } __value_; } __ptr_; } _sessionRootObjects;
    struct HashTable<unsigned long long, PHASESource *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> { struct Allocator *m_allocator; unsigned int *m_buckets; union Entry { struct EntryWithoutHash *withoutHash; struct EntryWithHash *withHash; } m_entries; unsigned int m_capacity; unsigned int m_count; unsigned int m_touchedEntries; unsigned int m_freeList; unsigned int m_version; } _sources;
    struct vector<PendingListener, std::allocator<PendingListener>> { struct PendingListener *__begin_; struct PendingListener *__end_; struct __compressed_pair<PendingListener *, std::allocator<PendingListener>> { struct PendingListener *__value_; } __end_cap_; } pendingListeners;
    REPHASEContext *_context;
    PHASEListener *_systemListener;
}

@property (readonly) BOOL isValid;

- (void *)listeners;
- (void *)sources;
- (id).cxx_construct;
- (void)removeEntity:(unsigned long long)a0;
- (void)destroy;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void *)sessionRootObjects;
- (void)createAudioSessionRootWithID:(unsigned long long)a0 sessionUUID:(id)a1;
- (void)createListenerWithID:(unsigned long long)a0 listenerType:(unsigned char)a1;
- (void)createPendingListenersIfReady;
- (void *)getAllEntities;
- (id)getEntity:(unsigned long long)a0;
- (id)getOrCreateEntity:(unsigned long long)a0;

@end
