@class NSString, TSUUUIDPath;

@interface TSKCOAbstractOperation : NSObject {
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__begin_; void *__end_; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::allocator<TSU::UUIDData<TSP::UUIDData>>> { void *__value_; } __end_cap_; } _address;
}

@property (readonly, nonatomic) BOOL isNoop;
@property (readonly, nonatomic) TSUUUIDPath *UUIDPath;
@property (readonly, nonatomic) const void *UUIDAddress;
@property (readonly, nonatomic) NSString *toString;

+ (id)newObjectForUnarchiver:(id)a0 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1;

- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 noop:(BOOL)a1;
- (id)initWithUnarchiver:(id)a0 message:(const void *)a1;
- (struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })newTransformableOperation;
- (void)populateAddressFromIdentifier:(const void *)a0;
- (void)populateRangeVector:(void *)a0 fromRangeList:(const void *)a1;
- (void)saveAddress:(const void *)a0 identifier:(void *)a1;
- (void)saveRangeVector:(void *)a0 rangeList:(void *)a1;

@end
