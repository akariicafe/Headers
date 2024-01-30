@interface CKComponentAttributeSetWrapper : NSObject {
    struct shared_ptr<const std::unordered_map<CKComponentViewAttribute, CKBoxedValue>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _attributes;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
