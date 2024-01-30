@interface MLCompilerNeuralNetworkOutput : NSObject

@property (readonly, nonatomic) struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } network;
@property (readonly, nonatomic) struct shared_ptr<MIL::IRProgram> { struct IRProgram *__ptr_; struct __shared_weak_count *__cntrl_; } program;

+ (id)outputWithEspressoNetwork:(struct shared_ptr<Espresso::net> { struct net *x0; struct __shared_weak_count *x1; })a0;
+ (id)outputWithMILProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram *x0; } x0; })a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEspressoNetwork:(struct shared_ptr<Espresso::net> { struct net *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithMILProgram:(struct shared_ptr<MIL::IRProgram> { struct IRProgram *x0; struct __shared_weak_count *x1; })a0;

@end
