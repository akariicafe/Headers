@interface TSULRUCacheElement : NSObject {
    struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long>> { _Atomic unsigned long long __a_value; } __a_; } _counter;
}

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) unsigned long long counterValue;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 counter:(unsigned long long)a1;
- (unsigned long long)p_counterValue;
- (void)p_updateCounter:(unsigned long long)a0;

@end
