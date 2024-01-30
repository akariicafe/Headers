@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface PXGMetalTextureCache : NSObject {
    NSMutableArray *_entries;
    unsigned long long _capacity;
    double _ageLimit;
    unsigned long long _sizeLimit;
    unsigned long long _peakCount;
    unsigned long long _peakMemory;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property unsigned long long capacity;
@property double ageLimit;
@property unsigned long long sizeLimit;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long peakTextureCount;
@property (readonly) unsigned long long peakMemorySize;

- (id)initWithDevice:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)_description;
- (id)textureWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1;
- (void)recycleTexture:(id)a0;
- (void)_enforceLimits;
- (void)_purgeOldestTexture;

@end
