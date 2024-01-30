@class wspContext;

@interface wspQueryStatusExIn : NSObject {
    struct { unsigned int msgid; unsigned int status; unsigned int checksum; unsigned int reserved2; } msghdr;
}

@property (retain) wspContext *wctx;
@property unsigned int bmk;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithCtx:(id)a0;

@end
