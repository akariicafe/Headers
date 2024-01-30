@class NSString;
@protocol MTLDevice;

@interface MTKTextureIOBufferAllocator : NSObject <TXRBufferAllocator> {
    id<MTLDevice> _device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
