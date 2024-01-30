@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction

@property (retain, nonatomic) MTLFunctionConstantValues *constantValues;

- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)importedSymbols;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (id)bitcodeData;
- (id)importedLibraries;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;

@end
