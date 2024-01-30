@protocol MTLDevice;

@interface ARSharedGPUDevice : NSObject

@property (retain, nonatomic) id<MTLDevice> device;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
