@class NSString, NSMutableArray, SCNFixedSizePage;
@protocol MTLDevice;

@interface SCNMTLBufferAllocator : NSObject {
    id<MTLDevice> _device;
    NSString *_name;
    NSMutableArray *_pages;
    SCNFixedSizePage *_currentAllocatorPage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allocatorLock;
}

@property (readonly, nonatomic) unsigned long long bufferSize;
@property (readonly, nonatomic) unsigned long long elementSize;

- (void)dealloc;
- (id)_newSubBuffer;
- (id)initWithDevice:(id)a0 fixedSizeElement:(unsigned long long)a1 buffersize:(unsigned long long)a2 name:(id)a3;
- (id)newSubBufferWithBytes:(const void *)a0 length:(unsigned long long)a1 renderContext:(id)a2;

@end
