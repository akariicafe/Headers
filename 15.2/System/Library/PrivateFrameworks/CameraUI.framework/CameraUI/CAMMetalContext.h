@protocol MTLCommandQueue, MTLDevice;

@interface CAMMetalContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;

- (void).cxx_destruct;
- (id)init;

@end
