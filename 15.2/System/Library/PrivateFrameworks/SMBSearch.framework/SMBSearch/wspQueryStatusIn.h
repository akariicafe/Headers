@class wspContext;

@interface wspQueryStatusIn : NSObject {
    struct { unsigned int msgid; unsigned int status; unsigned int checksum; unsigned int reserved2; } msghdr;
}

@property (retain) wspContext *wctx;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithCtx:(id)a0;

@end
