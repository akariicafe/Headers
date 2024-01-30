@interface PMLDataChunkDenseDoubleVector : PMLDataChunk

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) const double *vector;

+ (id)chunkWithVector:(const double *)a0 count:(int)a1;
+ (unsigned int)dataChunkType;

@end
