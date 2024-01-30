@class NSData;

@interface PMLDataChunkRaw : PMLDataChunk

@property (readonly, nonatomic) NSData *data;

+ (unsigned int)dataChunkType;
+ (id)chunkWithData:(id)a0;

@end
