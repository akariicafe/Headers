@class wspHeader;

@interface wspQueryStatusOut : NSObject

@property (retain) wspHeader *whdr;
@property unsigned int qStatus;

- (void).cxx_destruct;
- (id)init;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
