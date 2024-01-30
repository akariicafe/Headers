@interface MTLToolsPerfCounterMailbox : NSObject {
    void *_requester;
    struct vector<std::__1::pair<NSData *, unsigned long>, std::__1::allocator<std::__1::pair<NSData *, unsigned long> > > { struct pair<NSData *, unsigned long> *__begin_; struct pair<NSData *, unsigned long> *__end_; struct __compressed_pair<std::__1::pair<NSData *, unsigned long> *, std::__1::allocator<std::__1::pair<NSData *, unsigned long> > > { struct pair<NSData *, unsigned long> *__value_; } __end_cap_; } _data;
    struct __wrap_iter<std::__1::pair<NSData *, unsigned long> *> { struct pair<NSData *, unsigned long> *__i; } _iterator;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)extractDataAndNumSamples:(unsigned long long *)a0 forRequester:(void *)a1 isLast:(BOOL *)a2;
- (void)insertData:(id)a0 andNumSamples:(unsigned long long)a1 forRequester:(void *)a2;

@end
