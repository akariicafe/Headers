@class wspContext, cNodeRestriction;

@interface wspQueryIn : NSObject {
    struct { unsigned int msgid; unsigned int status; unsigned int checksum; unsigned int reserved2; } msghdr;
}

@property (retain) wspContext *wctx;
@property (retain) cNodeRestriction *primaryCnodeRestriction;
@property (retain) cNodeRestriction *secondaryCnodeRestriction;

- (void).cxx_destruct;
- (int)encodePrimaryQuery:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (int)encodeSecondaryQuery:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithCtx:(id)a0;
- (id)makePrimaryCnodeRestriction;
- (id)makeSecondaryCnodeRestriction;

@end
