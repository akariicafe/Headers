@class wspHeader;

@interface wspConnectOut : NSObject

@property (retain) wspHeader *whdr;
@property unsigned int serverVersion;

- (void).cxx_destruct;
- (id)init;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
