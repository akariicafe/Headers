@class NSString, NSArray, NSDictionary, MTLDebugInstrumentationData, MTLType;
@protocol MTLDevice, MTLFunctionHandle;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {
    NSArray *_relocations;
}

@property (readonly, copy) NSString *filePath;
@property (readonly) long long lineNumber;
@property (readonly, copy) NSString *unpackedFilePath;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *arguments;
@property (readonly) NSArray *bindings;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSArray *importedLibraries;
@property (readonly, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, nonatomic) id<MTLFunctionHandle> functionHandle;
@property (copy, nonatomic) NSArray *relocations;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long patchType;
@property (readonly) long long patchControlPointCount;
@property (readonly) NSArray *vertexAttributes;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (const struct { unsigned char x0[32]; } *)bitCodeHash;
- (id)reflectionWithOptions:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (id)newFunctionWithPluginData:(id)a0 bitcodeType:(unsigned char)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (void)reflectionWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)precompiledOutput;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)reflectionWithOptions:(unsigned long long)a0;
- (id)functionInputs;
- (void)dealloc;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (id)bitcodeData;
- (id)reflectionWithOptions:(unsigned long long)a0 binaryArchives:(id)a1;
- (id)initWithFunction:(id)a0 library:(id)a1;

@end
