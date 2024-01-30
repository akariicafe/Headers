@interface PMLDataChunkDenseFloatVector : PMLDataChunk

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) const float *vector;

+ (unsigned int)dataChunkType;
+ (id)chunkWithVector:(const float *)a0 count:(int)a1;

- (id)toVec;

@end
