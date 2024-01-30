@class NSData;

@interface PMLDataChunkRaw : PMLDataChunk

@property (readonly, nonatomic) NSData *data;

+ (id)chunkWithData:(id)a0;
+ (unsigned int)dataChunkType;

@end
