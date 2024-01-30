@interface VCPCNNEspressoContext : NSObject

@property (readonly, nonatomic) void *espressoContext;

+ (BOOL)supportGPU;
+ (void *)createContextWithForceCPU;
+ (void *)createContextWithMPSGraph;
+ (void *)createContextPreferred;
+ (void *)sharedContextWithForceCPU:(BOOL)a0;
+ (void *)sharedContextWithMPSGraph:(BOOL)a0;
+ (void *)sharedContextPreferred:(BOOL)a0;

- (void)dealloc;
- (id)initWithForceCPU:(BOOL)a0 forceNNGraph:(BOOL)a1 shared:(BOOL)a2;

@end
