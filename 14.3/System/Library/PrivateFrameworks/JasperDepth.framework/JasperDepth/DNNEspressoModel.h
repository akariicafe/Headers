@interface DNNEspressoModel : NSObject

@property (nonatomic) int engine;
@property (nonatomic) void *plan;
@property (nonatomic) void *ctx;
@property (nonatomic) struct { void *plan; int network_index; } net;
@property int storage;

- (void)dealloc;
- (BOOL)initializeInputOutputBlobs;
- (BOOL)loadNetworkWithName:(id)a0 runningMode:(long long)a1;

@end
