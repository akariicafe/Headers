@interface _EARLmModel2 : _EARLmHandle

@property (readonly, nonatomic) struct shared_ptr<quasar::LmModel2> { struct LmModel2 *__ptr_; struct __shared_weak_count *__cntrl_; } model;

+ (void)initialize;
+ (id)deserializeModelData:(id)a0;

- (float)weight;
- (double)age;
- (void)setProtectionClass:(id)a0;
- (void)setWeight:(float)a0;
- (id)metrics;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithModel:(struct shared_ptr<quasar::LmModel2> { struct LmModel2 *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)writeToDirectory:(id)a0;
- (id)serializedModelWithLanguage:(id)a0 modelData:(id)a1 oovs:(id)a2;

@end
