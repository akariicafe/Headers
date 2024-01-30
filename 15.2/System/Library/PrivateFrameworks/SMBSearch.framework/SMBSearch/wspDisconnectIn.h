@interface wspDisconnectIn : NSObject {
    struct { unsigned int msgid; unsigned int status; unsigned int checksum; unsigned int reserved2; } msghdr;
}

- (id)init;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;

@end
