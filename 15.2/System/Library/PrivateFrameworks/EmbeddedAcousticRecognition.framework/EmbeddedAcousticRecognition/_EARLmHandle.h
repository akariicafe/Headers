@interface _EARLmHandle : NSObject

@property (readonly, nonatomic) struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle *__ptr_; struct __shared_weak_count *__cntrl_; } handle;

- (void).cxx_destruct;
- (id)_initWithHandle:(struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;

@end
