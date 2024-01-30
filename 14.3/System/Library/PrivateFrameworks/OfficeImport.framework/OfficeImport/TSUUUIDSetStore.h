@class NSLock, NSMutableDictionary, TSUSparseArray;

@interface TSUUUIDSetStore : NSObject <NSCopying> {
    NSLock *_lock;
    TSUSparseArray *_uuidSetForIndex;
    NSMutableDictionary *_indexesUsingUuid;
    unsigned int _highestIndex;
}

@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)addSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)foreachUuidSet:(id /* block */)a0;
- (unsigned int)indexOfSet:(id)a0;
- (void)p_addSet:(id)a0 atIndex:(unsigned int)a1;
- (id)indexesUsingUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0;
- (id)setForIndex:(unsigned int)a0;
- (void)_foreachUuidSet:(id /* block */)a0;
- (unsigned int)addSetForUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0;
- (void)removeSetAtIndex:(unsigned int)a0;
- (BOOL)containsUuidSet:(id)a0;
- (id)indexesUsingAnyOfUuids:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a0;
- (id)subsetStoreForIndexes:(id)a0;
- (unsigned int)addSetForSingleUuid:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0;

@end
