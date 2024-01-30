@class NSString;
@protocol MTLDevice;

@interface MPSExternalPluginBase : NSObject <MPSExternalPluginBase> {
    MPSExternalPluginBase *_self;
    id<MTLDevice> _device;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)maxBatchSize;
- (id)initWithDevice:(id)a0;
- (id)init;
- (id)device;

@end
