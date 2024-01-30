@interface RLMOptionalBase : NSProxy {
    struct unique_ptr<(anonymous namespace)::OptionalBase, std::default_delete<(anonymous namespace)::OptionalBase>> { struct __compressed_pair<(anonymous namespace)::OptionalBase *, std::default_delete<(anonymous namespace)::OptionalBase>> { struct OptionalBase *__value_; } __ptr_; } _impl;
}

- (void)doesNotRecognizeSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (id).cxx_construct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
