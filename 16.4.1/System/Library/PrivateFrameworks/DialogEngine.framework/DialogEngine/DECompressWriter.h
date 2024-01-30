@class NSObject;
@protocol DEWriter;

@interface DECompressWriter : NSObject <DEWriter>

@property (retain, nonatomic) NSObject<DEWriter> *writer;
@property (nonatomic) struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } stream;
@property (nonatomic) BOOL streamInitialized;
@property (nonatomic) BOOL streamEnded;
@property (nonatomic) BOOL compressed;

+ (BOOL)isCompressed:(id)a0;

- (void)writeData:(id)a0;
- (void)dealloc;
- (void)close;
- (id)init;
- (id)initWithWriter:(id)a0;
- (void).cxx_destruct;
- (id)compress:(id)a0 finalize:(BOOL)a1;

@end
