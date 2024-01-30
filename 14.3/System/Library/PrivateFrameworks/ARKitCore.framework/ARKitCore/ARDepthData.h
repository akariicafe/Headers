@interface ARDepthData : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *depthMap;
@property (readonly, nonatomic) struct __CVBuffer { } *confidenceMap;

- (void)dealloc;
- (id)initWithDepthMap:(struct __CVBuffer { } *)a0 confidenceMap:(struct __CVBuffer { } *)a1;

@end
