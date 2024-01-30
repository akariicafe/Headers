@class NSError, NSOutputStream;

@interface SSGzipOutputStream : NSOutputStream {
    NSOutputStream *_backingStream;
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _stream;
    unsigned long long _streamContentLength;
    NSError *_streamError;
    char *_streamOutBuffer;
    unsigned long long _streamOutBufferSize;
}

- (void)close;
- (id)streamError;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)propertyForKey:(id)a0;
- (id)initToMemory;
- (void)open;
- (BOOL)hasSpaceAvailable;
- (unsigned long long)streamStatus;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)_initializeOutputStream;
- (void)_setStreamError:(int)a0 context:(id)a1;
- (long long)_consumeStreamOutput:(BOOL)a0;
- (unsigned long long)streamContentLength;

@end
