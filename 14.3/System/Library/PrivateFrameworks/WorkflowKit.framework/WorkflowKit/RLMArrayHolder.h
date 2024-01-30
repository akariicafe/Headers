@interface RLMArrayHolder : NSObject {
    struct unique_ptr<id [], std::__1::default_delete<id []> > { struct __compressed_pair<__strong id *, std::__1::default_delete<id []> > { id *__value_; } __ptr_; } items;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
