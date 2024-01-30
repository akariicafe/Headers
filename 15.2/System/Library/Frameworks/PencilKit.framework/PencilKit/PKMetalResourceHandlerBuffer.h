@class PKMetalBuffer, NSMutableArray;
@protocol MTLDevice;

@interface PKMetalResourceHandlerBuffer : NSObject {
    id<MTLDevice> _device;
    PKMetalBuffer *_buffer;
    unsigned long long _currentOffset;
    unsigned long long _bufferSize;
    unsigned long long _options;
    BOOL _purgeable;
    NSMutableArray *_reusableBuffers;
}

- (void).cxx_destruct;

@end
