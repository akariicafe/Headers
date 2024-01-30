@class TSUUUIDSetStore, NSMutableDictionary;

@interface TSUUUIDSubsetCreator : NSObject {
    NSMutableDictionary *_createdSubsetsByRange;
}

@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__begin_; struct UUIDData<TSP::UUIDData> *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *__value_; } __end_cap_; } baseUuidVector;
@property (readonly) TSUUUIDSetStore *uuidSetStore;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithUuidSetStore:(id)a0 baseUuidVector:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; struct UUIDData<TSP::UUIDData> *x1; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> *x0; } x2; } *)a1;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
