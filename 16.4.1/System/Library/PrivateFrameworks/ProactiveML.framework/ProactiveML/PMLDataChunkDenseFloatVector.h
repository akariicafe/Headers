@interface PMLDataChunkDenseFloatVector : PMLDataChunk

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) const float *vector;

+ (id)chunkWithVector:(const float *)a0 count:(int)a1;
+ (unsigned int)dataChunkType;

- (id)toVec;

@end
