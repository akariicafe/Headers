@interface ETOpaqueCopy : NSObject {
    struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container *__ptr_; struct __shared_weak_count *__cntrl_; } blob;
}

- (const struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container *x0; struct __shared_weak_count *x1; } *)getBlob;
- (id)initWithAbstractBlobContainer:(struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container *x0; struct __shared_weak_count *x1; } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
