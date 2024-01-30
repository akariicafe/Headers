@class NSData, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_data;

@interface _MTLFunctionInternal : _MTLFunction {
    struct MTLFunctionData { unsigned long long bitCodeOffset; unsigned long long bitCodeFileSize; unsigned long long publicArgumentsOffset; unsigned long long privateArgumentsOffset; unsigned long long sourceArchiveOffset; unsigned short airMajorVersion; unsigned short airMinorVersion; unsigned short languageMajorVersion; unsigned short languageMinorVersion; struct { unsigned char key[32]; } bitcodeHash; unsigned char bitcodeType; NSData *pluginData; unsigned char renderTargetArrayIndexType; unsigned char patchType : 2; unsigned char controlPointCount : 6; NSObject<OS_dispatch_data> *functionInputs; } _functionData;
    unsigned char _publicMetadataInitialized;
    unsigned char _privateMetadataInitialized;
    unsigned char _sourceArchiveMetadataInitialized;
    unsigned char _stitchableFunctionMetadataInitialized;
    void *_programObject;
    NSString *_filePath;
    long long _lineNumber;
    NSObject<OS_dispatch_queue> *_functionQueue;
}

- (void)setPluginData:(id)a0;
- (id)pluginData;
- (void)setFunctionConstants:(id)a0;
- (id)filePath;
- (void)setLineNumber:(long long)a0;
- (id)importedSymbols;
- (id)precompiledOutput;
- (id)functionConstantsDictionary;
- (id)relocations;
- (id)returnType;
- (id)arguments;
- (const struct MTLFunctionData { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; struct { unsigned char x0[32]; } x9; unsigned char x10; id x11; unsigned char x12; unsigned char x13 : 2; unsigned char x14 : 6; id x15; } *)functionData;
- (id)newSpecializedFunctionWithDescriptor:(id)a0 destinationArchive:(id)a1 functionCache:(id)a2 error:(id *)a3;
- (void)setBitcodeType:(unsigned char)a0;
- (void *)programObject;
- (unsigned long long)sourceArchiveOffset;
- (unsigned long long)bitCodeFileSize;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 libraryData:(struct MTLLibraryData { void /* function */ **x0; struct { unsigned char x0[32]; } x1; _Atomic int x2; id x3; id x4; } *)a2 functionData:(struct MTLFunctionData { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; struct { unsigned char x0[32]; } x9; unsigned char x10; id x11; unsigned char x12; unsigned char x13 : 2; unsigned char x14 : 6; id x15; } *)a3 device:(id)a4;
- (id)stageInputAttributes;
- (const struct { unsigned char x0[32]; } *)bitCodeHash;
- (void)setRelocations:(id)a0;
- (long long)lineNumber;
- (unsigned long long)bitCodeOffset;
- (void)initializePrivateMetadata;
- (BOOL)specializedFunctionHash:(struct { unsigned char x0[32]; } *)a0 requestData:(id *)a1 constants:(id)a2 specializedName:(id)a3 completionHandler:(id /* block */)a4;
- (id)functionInputs;
- (void)setUnpackedFilePath:(id)a0;
- (void)setFilePath:(id)a0;
- (void)setReturnType:(id)a0;
- (id)functionConstants;
- (id)importedLibraries;
- (unsigned long long)renderTargetArrayIndexType;
- (void)setSourceArchiveOffset:(unsigned long long)a0;
- (void)setStageInputAttributes:(id)a0;
- (BOOL)needsFunctionConstantValues;
- (void)setPrecompiledOutput:(id)a0;
- (id)vertexAttributes;
- (void)setVertexAttributes:(id)a0;
- (void)setFunctionConstantSpecializationHash:(const struct { unsigned char x0[32]; } *)a0;
- (void)initializeStitchableFunctionMetadata;
- (void)initializeSourceArchive;
- (void)dealloc;
- (void)newSpecializedFunctionWithDescriptor:(id)a0 destinationArchive:(id)a1 functionCache:(id)a2 sync:(BOOL)a3 completionHandler:(id /* block */)a4;
- (unsigned long long)patchType;
- (void)setOptions:(unsigned long long)a0;
- (id).cxx_construct;
- (unsigned char)bitcodeType;
- (void)setArguments:(id)a0;
- (long long)patchControlPointCount;
- (id)newFunctionWithPluginData:(id)a0 bitcodeType:(unsigned char)a1;
- (void)initializePublicMetadata;
- (id)unpackedFilePath;

@end
