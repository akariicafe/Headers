@interface USKPropertyIterator : NSObject <USKIterator> {
    struct vector<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty>> { struct UsdProperty *__begin_; struct UsdProperty *__end_; struct __compressed_pair<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty *, std::allocator<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty>> { struct UsdProperty *__value_; } __end_cap_; } _properties;
    struct __wrap_iter<pxrInternal_v0_21__aapl__pxrReserved__::UsdProperty *> { struct UsdProperty *__i; } _it;
}

- (id)nextObject;
- (id)initWithProperties:(const void *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
