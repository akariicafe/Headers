@protocol MTLCommandQueue;

@interface BWDeepZoomInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (nonatomic) int version;

- (void)dealloc;

@end
