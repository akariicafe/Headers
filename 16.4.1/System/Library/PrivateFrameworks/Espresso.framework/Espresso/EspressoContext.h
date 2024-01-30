@interface EspressoContext : NSObject

@property (readonly) struct shared_ptr<Espresso::abstract_context> { struct abstract_context *__ptr_; struct __shared_weak_count *__cntrl_; } ctx;
@property (readonly) int platform;

- (id)initWithPlatform:(int)a0;
- (id).cxx_construct;
- (id)initWithContext:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 andWisdomParams:(id)a1;
- (id)initWithNetworkContext:(id)a0;
- (void)set_priority:(BOOL)a0 low_priority_max_ms_per_command_buffer:(float)a1 gpu_priority:(unsigned int)a2;

@end
