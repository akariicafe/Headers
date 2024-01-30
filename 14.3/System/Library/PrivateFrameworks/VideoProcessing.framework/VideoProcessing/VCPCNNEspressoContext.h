@interface VCPCNNEspressoContext : NSObject

@property (readonly, nonatomic) void *espressoContext;

+ (BOOL)supportGPU;
+ (void *)createContextWithForceCPU:(BOOL)a0;
+ (void *)sharedEspressoContext:(BOOL)a0;

- (id)initWithForceCPU:(BOOL)a0 shared:(BOOL)a1;

@end
