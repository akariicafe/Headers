@class NSString;

@interface VNEspressoResources : NSObject

@property (readonly) struct { void *plan; int network_index; } network;
@property (readonly) void *plan;
@property (readonly) void *context;
@property (readonly) NSString *modelName;

- (void)free;
- (void).cxx_destruct;
- (id)initWithModelName:(id)a0 network:(struct { void *x0; int x1; })a1 plan:(void *)a2 context:(void *)a3;
- (void)dealloc;
- (id)description;

@end
