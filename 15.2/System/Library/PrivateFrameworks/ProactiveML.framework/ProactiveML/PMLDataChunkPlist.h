@interface PMLDataChunkPlist : PMLDataChunk {
    id _plist;
    BOOL _parsed;
}

@property (readonly, nonatomic) id plist;

+ (unsigned int)dataChunkType;
+ (id)chunkWithPlist:(id)a0;

- (void).cxx_destruct;

@end
