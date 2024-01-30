@class wspHeader;

@interface wspQueryStatusOut : NSObject

@property (retain) wspHeader *whdr;
@property unsigned int qStatus;

- (id)init;
- (void).cxx_destruct;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
