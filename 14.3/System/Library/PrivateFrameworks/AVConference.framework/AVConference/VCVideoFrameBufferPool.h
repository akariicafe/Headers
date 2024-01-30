@class NSMutableDictionary;

@interface VCVideoFrameBufferPool : NSObject {
    int _maxBufferCount;
    NSMutableDictionary *_bufferPool;
}

- (void)dealloc;
- (id)initWithCapacity:(int)a0;
- (BOOL)addFrame:(struct __CVBuffer { } *)a0 time:(long long)a1;
- (BOOL)releaseFrameWithTime:(long long)a0;

@end
