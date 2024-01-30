@class wspHeader;

@interface wspFreeCursorOut : NSObject

@property (retain) wspHeader *whdr;
@property unsigned int cursorsRemaining;

- (id)init;
- (void).cxx_destruct;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
