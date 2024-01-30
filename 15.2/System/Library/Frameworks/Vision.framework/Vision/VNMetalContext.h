@class NSDictionary;
@protocol MTLDevice;

@interface VNMetalContext : NSObject

@property (readonly) id<MTLDevice> metalDevice;
@property (readonly) NSDictionary *wisdomParams;
@property (readonly) BOOL useGPU;

- (void).cxx_destruct;
- (id)initWithMetalDevice:(id)a0;

@end
