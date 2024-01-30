@interface _EARLmModel2 : _EARLmHandle

@property (readonly, nonatomic) struct shared_ptr<quasar::LmModel2> { struct LmModel2 *__ptr_; struct __shared_weak_count *__cntrl_; } model;

+ (void)initialize;
+ (id)deserializeModelData:(id)a0;

- (float)weight;
- (double)age;
- (id).cxx_construct;
- (id)metrics;
- (void)setProtectionClass:(id)a0;
- (void)setWeight:(float)a0;
- (void).cxx_destruct;
- (id)_initWithModel:(struct shared_ptr<quasar::LmModel2> { struct LmModel2 *x0; struct __shared_weak_count *x1; })a0;
- (id)serializedModelWithLanguage:(id)a0 modelData:(id)a1 oovs:(id)a2;
- (BOOL)writeToDirectory:(id)a0;

@end
