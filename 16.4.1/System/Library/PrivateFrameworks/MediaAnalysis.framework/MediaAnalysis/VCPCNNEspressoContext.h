@interface VCPCNNEspressoContext : NSObject

@property (readonly, nonatomic) void *espressoContext;

+ (void *)createContextPreferred;
+ (void *)createContextWithForceCPU;
+ (void *)createContextWithMPSGraph;
+ (void *)sharedContextPreferred:(BOOL)a0;
+ (void *)sharedContextWithForceCPU:(BOOL)a0;
+ (void *)sharedContextWithMPSGraph:(BOOL)a0;
+ (BOOL)supportGPU;

- (void)dealloc;
- (id)initWithForceCPU:(BOOL)a0 forceNNGraph:(BOOL)a1 shared:(BOOL)a2;

@end
