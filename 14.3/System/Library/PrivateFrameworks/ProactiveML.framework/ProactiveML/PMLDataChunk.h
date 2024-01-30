@class NSData;

@interface PMLDataChunk : NSObject <NSCopying> {
    NSData *_backingData;
    NSData *_superdata;
}

+ (unsigned int)dataChunkType;
+ (id)chunkOfType:(unsigned int)a0 data:(id)a1 superdata:(id)a2;
+ (id)chunksFromFileAtPath:(id)a0;
+ (id)chunksFromData:(id)a0;
+ (id)serializeChunks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setSuperdata:(id)a0;

@end
