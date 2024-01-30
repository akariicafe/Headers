@interface wspFreeCursorIn : NSObject {
    struct { unsigned int msgid; unsigned int status; unsigned int checksum; unsigned int reserved2; } msghdr;
}

@property unsigned int cursorToFree;

- (id)initWithCursor:(unsigned int)a0;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;

@end
