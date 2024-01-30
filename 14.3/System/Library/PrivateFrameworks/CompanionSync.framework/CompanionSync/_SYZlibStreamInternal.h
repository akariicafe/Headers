@interface _SYZlibStreamInternal : _SYStreamGuts <NSLocking> {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _zStream;
    unsigned long long _inputSize;
    unsigned long long _outputSize;
    char *_input;
    char *_output;
    unsigned long long _writeOffset;
    unsigned long long _readOffset;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) long long inputRoom;
@property (readonly, nonatomic) void *inputPtr;
@property (readonly, nonatomic) long long outputAvailable;
@property (readonly, nonatomic) const void *outputPtr;

- (void)unlock;
- (void)lock;
- (id)init;
- (void)dealloc;
- (void)setOutputSize:(long long)a0;
- (void)setInputSize:(long long)a0;
- (void)synchronized:(id /* block */)a0;
- (void)setZlibError:(int)a0 forStream:(id)a1;
- (void)setStatusForStream:(id)a0;
- (long long)writeInputFromBuffer:(const void *)a0 length:(long long)a1;
- (long long)writeInputFromStream:(id)a0;
- (long long)readOutputToBuffer:(void *)a0 length:(long long)a1;
- (long long)readOutputToStream:(id)a0;

@end
