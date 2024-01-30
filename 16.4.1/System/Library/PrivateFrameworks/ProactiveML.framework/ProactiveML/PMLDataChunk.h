@class NSData;

@interface PMLDataChunk : NSObject <NSCopying> {
    NSData *_backingData;
    NSData *_superdata;
}

+ (id)chunksFromData:(id)a0;
+ (id)chunkOfType:(unsigned int)a0 data:(id)a1 superdata:(id)a2;
+ (id)chunksFromFileAtPath:(id)a0;
+ (unsigned int)dataChunkType;
+ (id)serializeChunks:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)setSuperdata:(id)a0;

@end
