@class NSMutableDictionary;

@interface VCImageConverterBase : NSObject {
    struct __CVPixelBufferPool { } *_bufferPool;
    NSMutableDictionary *_bufferPoolDictionary;
}

- (void)dealloc;
- (BOOL)setUpBufferPoolForOutputWidth:(unsigned long long)a0 outputHeight:(unsigned long long)a1;
- (id)initWithFormatType:(unsigned int)a0;
- (BOOL)ensureBufferPoolSupportsOutputWidth:(unsigned long long)a0 outputHeight:(unsigned long long)a1;

@end
