@class NSString;
@protocol BUStreamReadChannel;

@interface BUZipInflateReadChannel : NSObject <BUStreamReadChannel> {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _stream;
    char *_outBuffer;
}

@property (retain, nonatomic) id<BUStreamReadChannel> readChannel;
@property (nonatomic) unsigned long long remainingUncompressedSize;
@property (nonatomic) unsigned int CRC;
@property (nonatomic) BOOL validateCRC;
@property (nonatomic) unsigned long long outBufferSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)test_setMaxBufferSize:(unsigned long long)a0;

- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (void)readWithHandler:(id /* block */)a0;
- (id)initWithReadChannel:(id)a0 uncompressedSize:(unsigned long long)a1 CRC:(unsigned int)a2 validateCRC:(BOOL)a3;
- (void)handleFailureWithHandler:(id /* block */)a0 error:(id)a1;
- (void)prepareBuffer;
- (BOOL)processData:(id)a0 inflateResult:(int *)a1 CRC:(unsigned int *)a2 isDone:(BOOL)a3 handler:(id /* block */)a4;

@end
