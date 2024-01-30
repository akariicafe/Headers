@class wspHeader;

@interface wspQueryOut : NSObject

@property (retain) wspHeader *whdr;
@property unsigned int trueSequential;
@property unsigned int workID;
@property unsigned int cursor;

- (void).cxx_destruct;
- (id)init;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
