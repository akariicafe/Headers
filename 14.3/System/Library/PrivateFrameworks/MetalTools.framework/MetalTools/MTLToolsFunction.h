@class NSString, NSArray, NSDictionary, MTLType;
@protocol MTLDevice;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI>

@property (readonly, copy) NSString *filePath;
@property (readonly) long long lineNumber;
@property (readonly, copy) NSString *unpackedFilePath;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *arguments;
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

+ (id)newFunctionWithBaseObject:(id)a0 parent:(id)a1;

- (id)newFunctionWithPluginData:(id)a0 bitcodeType:(unsigned char)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (id)formattedDescription:(unsigned long long)a0;
- (id)reflectionWithOptions:(unsigned long long)a0 binaryArchives:(id)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (id)functionInputs;
- (id)reflectionWithOptions:(unsigned long long)a0;
- (id)bitcodeData;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (void)reflectionWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (const struct { unsigned char x0[32]; } *)bitCodeHash;
- (id)reflectionWithOptions:(unsigned long long)a0 pipelineLibrary:(id)a1;

@end
