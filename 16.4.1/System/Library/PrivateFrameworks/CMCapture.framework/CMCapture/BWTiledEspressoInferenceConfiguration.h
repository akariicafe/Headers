@protocol MTLCommandQueue;

@interface BWTiledEspressoInferenceConfiguration : BWInferenceConfiguration

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (nonatomic) BOOL forceSynchronousInference;

- (void)dealloc;
- (id)initWithInferenceType:(int)a0 metalCommandQueue:(id)a1;

@end
