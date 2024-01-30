@class VCPMADResourceManager, VCPMADResource;

@interface VCPMADResourceLock : NSObject {
    VCPMADResourceManager *_resourceManager;
    VCPMADResource *_resource;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithResourceManager:(id)a0 andResource:(id)a1;

@end
