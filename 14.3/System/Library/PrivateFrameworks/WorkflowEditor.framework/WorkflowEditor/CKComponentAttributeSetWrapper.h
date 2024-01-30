@interface CKComponentAttributeSetWrapper : NSObject {
    struct shared_ptr<const std::__1::unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > > > { struct unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > > *__ptr_; struct __shared_weak_count *__cntrl_; } _attributes;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
