@class EspressoMetalKernelsCache;

@interface EspressoSharedKernelCacheEntry : NSObject

@property (weak) EspressoMetalKernelsCache *cached;

- (void).cxx_destruct;

@end
