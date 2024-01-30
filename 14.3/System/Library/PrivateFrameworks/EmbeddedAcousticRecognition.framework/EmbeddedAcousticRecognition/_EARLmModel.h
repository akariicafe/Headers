@interface _EARLmModel : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::LmModel> { struct LmModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;

+ (void)initialize;
+ (void)removeWithDirectory:(id)a0;

- (double)age;
- (void)setWeight:(float)a0;
- (void).cxx_destruct;
- (id)_initWithModel:(struct shared_ptr<quasar::LmModel> { struct LmModel *x0; struct __shared_weak_count *x1; })a0;
- (id)metrics;
- (id)initWithConfiguration:(id)a0;
- (id).cxx_construct;
- (float)weight;
- (id)handle;
- (id)initWithConfiguration:(id)a0 root:(id)a1;
- (BOOL)trainWithData:(id)a0;
- (id)initFromDirectory:(id)a0;
- (BOOL)trainWithData:(id)a0 shouldStop:(id /* block */)a1;
- (BOOL)writeToDirectory:(id)a0;

@end
