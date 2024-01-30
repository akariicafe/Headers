@class NSMutableDictionary;

@interface VCVideoFrameBufferPool : NSObject {
    int _maxBufferCount;
    NSMutableDictionary *_bufferPool;
}

- (id)initWithCapacity:(int)a0;
- (void)dealloc;
- (BOOL)addFrame:(struct __CVBuffer { } *)a0 time:(long long)a1;
- (BOOL)releaseFrameWithTime:(long long)a0;

@end
