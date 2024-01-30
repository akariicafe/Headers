@interface wspHeader : NSObject

@property unsigned int msgid;
@property unsigned int status;
@property unsigned int checksum;
@property unsigned int reserved2;

- (id)init;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
