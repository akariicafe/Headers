@interface ETOpaqueCopy : NSObject {
    struct shared_ptr<Espresso::abstract_blob_container> { struct abstract_blob_container *__ptr_; struct __shared_weak_count *__cntrl_; } blob;
}

- (const void *)getBlob;
- (void).cxx_destruct;
- (id)initWithAbstractBlobContainer:(void *)a0;
- (id).cxx_construct;

@end
