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

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setSuperdata:(id)a0;

@end
