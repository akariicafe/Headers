@interface RLMThreadSafeReference : NSObject {
    struct unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::__1::default_delete<realm::ThreadSafeReferenceBase> > { struct ThreadSafeReferenceBase *__value_; } __ptr_; } _reference;
    id _metadata;
    Class _type;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

+ (id)referenceWithThreadConfined:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)resolveReferenceInRealm:(id)a0;
- (id)initWithThreadConfined:(id)a0;

@end
