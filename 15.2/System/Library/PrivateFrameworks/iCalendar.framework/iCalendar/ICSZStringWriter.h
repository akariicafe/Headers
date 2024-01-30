@class NSString, NSMutableData;

@interface ICSZStringWriter : NSObject <ICSAppendable> {
    struct z_stream_s { char *next_in; unsigned int avail_in; unsigned long long total_in; char *next_out; unsigned int avail_out; unsigned long long total_out; char *msg; struct internal_state *state; void /* function */ *zalloc; void /* function */ *zfree; void *opaque; int data_type; unsigned long long adler; unsigned long long reserved; } _strm;
    NSMutableData *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)zResult;
- (void)appendString:(id)a0;
- (void)appendFormat:(id)a0;
- (void)_appendBytes:(const void *)a0 length:(unsigned long long)a1 andFlush:(BOOL)a2;

@end
