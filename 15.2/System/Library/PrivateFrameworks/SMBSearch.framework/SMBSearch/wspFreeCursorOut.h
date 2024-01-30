@class wspHeader;

@interface wspFreeCursorOut : NSObject

@property (retain) wspHeader *whdr;
@property unsigned int cursorsRemaining;

- (void).cxx_destruct;
- (id)init;
- (int)decodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesDecoded:(unsigned int *)a2;

@end
