@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {
    NSMutableData *deflatedData;
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } zstream;
    char *_outputBuffer;
    int _bufferingSize;
}

+ (id)dataByDeflatingData:(id)a0;

- (id)close;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)writeBuffer:(const char *)a0 size:(unsigned long long)a1;
- (id)initWithBufferingSize:(int)a0 compressionType:(unsigned long long)a1;

@end
