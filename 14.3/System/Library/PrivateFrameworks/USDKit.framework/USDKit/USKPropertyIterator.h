@interface USKPropertyIterator : NSObject <USKIterator> {
    struct vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> > { struct UsdProperty *__begin_; struct UsdProperty *__end_; struct __compressed_pair<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> > { struct UsdProperty *__value_; } __end_cap_; } _properties;
    struct __wrap_iter<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *> { struct UsdProperty *__i; } _it;
}

- (id)initWithProperties:(const struct vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> > { struct UsdProperty *x0; struct UsdProperty *x1; struct __compressed_pair<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *, std::__1::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty> > { struct UsdProperty *x0; } x2; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)nextObject;

@end
