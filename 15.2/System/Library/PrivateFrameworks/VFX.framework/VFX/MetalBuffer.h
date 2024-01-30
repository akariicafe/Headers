@protocol MTLBuffer;

@interface MetalBuffer : NSObject

@property (retain, nonatomic) id<MTLBuffer> buffer;
@property (nonatomic) double lastReuseTime;

- (id)initWithBuffer:(id)a0;
- (void).cxx_destruct;

@end
