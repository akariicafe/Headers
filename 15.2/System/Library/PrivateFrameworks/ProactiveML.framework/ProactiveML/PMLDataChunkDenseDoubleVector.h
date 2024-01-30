@interface PMLDataChunkDenseDoubleVector : PMLDataChunk

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) const double *vector;

+ (unsigned int)dataChunkType;
+ (id)chunkWithVector:(const double *)a0 count:(int)a1;

@end
