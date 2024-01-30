@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction

@property (retain, nonatomic) MTLFunctionConstantValues *constantValues;

+ (id)newFunctionWithBaseObject:(id)a0 parent:(id)a1;

- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (id)formattedDescription:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (void)dealloc;
- (id)precompiledOutput;
- (id)bitcodeData;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;

@end
