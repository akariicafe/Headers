@class NSString;
@protocol MTLCommandQueue, MTLDevice;

@interface MTLCaptureScope : _MTLObjectWithLabel <MTLCaptureScope>

@property (copy) NSString *label;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
