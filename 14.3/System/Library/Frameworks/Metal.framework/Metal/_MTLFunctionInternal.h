@class NSData, NSString, NSObject;
@protocol OS_dispatch_data;

@interface _MTLFunctionInternal : _MTLFunction {
    struct MTLFunctionData { unsigned long long bitCodeOffset; unsigned long long bitCodeFileSize; unsigned long long publicArgumentsOffset; unsigned long long privateArgumentsOffset; unsigned long long sourceArchiveOffset; unsigned short airMajorVersion; unsigned short airMinorVersion; unsigned short languageMajorVersion; unsigned short languageMinorVersion; struct { unsigned char key[32]; } bitcodeHash; unsigned char bitcodeType; NSData *pluginData; unsigned char renderTargetArrayIndexType; unsigned char patchType : 2; unsigned char controlPointCount : 6; NSObject<OS_dispatch_data> *functionInputs; } _functionData;
    unsigned char _publicMetadataInitialized;
    unsigned char _privateMetadataInitialized;
    unsigned char _sourceArchiveMetadataInitialized;
    struct MTLProgramObject { struct VariantList<4> { struct Chunk { struct VariantEntry { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; id x4; id x5; unsigned long long x6; id x7; } x0[4]; struct Chunk *x1; } x0; struct Chunk *x1; unsigned int x2; struct VariantEntry { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; id x4; id x5; unsigned long long x6; id x7; } x3; } x0; id x1; id x2; id x3; id x4; id x5; } *_programObject;
    NSString *_filePath;
    long long _lineNumber;
}

- (id)newFunctionWithPluginData:(id)a0 bitcodeType:(unsigned char)a1;
- (id)filePath;
- (unsigned long long)bitCodeFileSize;
- (void)setUnpackedFilePath:(id)a0;
- (id)functionConstants;
- (void)setArguments:(id)a0;
- (void)setOptions:(unsigned long long)a0;
- (void)setLineNumber:(long long)a0;
- (id)functionInputs;
- (long long)lineNumber;
- (unsigned char)bitcodeType;
- (void)dealloc;
- (unsigned long long)bitCodeOffset;
- (void)initializePrivateMetadata;
- (void)initializeSourceArchive;
- (id)functionConstantsDictionary;
- (void)setFunctionConstants:(id)a0;
- (const struct MTLFunctionData { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; struct { unsigned char x0[32]; } x9; unsigned char x10; id x11; unsigned char x12; unsigned char x13 : 2; unsigned char x14 : 6; id x15; } *)functionData;
- (id)arguments;
- (void)setReturnType:(id)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 libraryData:(struct MTLLibraryData { void /* function */ **x0; struct { unsigned char x0[32]; } x1; _Atomic int x2; id x3; id x4; } *)a2 functionData:(struct MTLFunctionData { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; struct { unsigned char x0[32]; } x9; unsigned char x10; id x11; unsigned char x12; unsigned char x13 : 2; unsigned char x14 : 6; id x15; } *)a3 device:(id)a4;
- (void)setBitcodeType:(unsigned char)a0;
- (struct MTLProgramObject { struct VariantList<4> { struct Chunk { struct VariantEntry { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; id x4; id x5; unsigned long long x6; id x7; } x0[4]; struct Chunk *x1; } x0; struct Chunk *x1; unsigned int x2; struct VariantEntry { char *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; id x4; id x5; unsigned long long x6; id x7; } x3; } x0; id x1; id x2; id x3; id x4; id x5; } *)programObject;
- (id)vertexAttributes;
- (unsigned long long)patchType;
- (id)precompiledOutput;
- (BOOL)needsFunctionConstantValues;
- (void)setPluginData:(id)a0;
- (unsigned long long)sourceArchiveOffset;
- (void)newSpecializedFunctionWithRequestType:(int)a0 llvmTargetVersion:(unsigned int)a1 constants:(id)a2 functionCache:(id)a3 originalRequest:(const struct MTLCompilerFunctionRequest { void /* function */ **x0; int x1; id x2; id x3; id x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; id x9; unsigned long long x10; id x11; id x12; id x13; id x14; int x15; } *)a4 sync:(BOOL)a5 specializedName:(id)a6 completionHandler:(id /* block */)a7;
- (long long)patchControlPointCount;
- (void)setPrecompiledOutput:(id)a0;
- (id).cxx_construct;
- (void)setFunctionConstantSpecializationHash:(const struct { unsigned char x0[32]; } *)a0;
- (unsigned long long)renderTargetArrayIndexType;
- (void)setFilePath:(id)a0;
- (void)initializePublicMetadata;
- (void)setSourceArchiveOffset:(unsigned long long)a0;
- (id)stageInputAttributes;
- (const struct { unsigned char x0[32]; } *)bitCodeHash;
- (void)setStageInputAttributes:(id)a0;
- (BOOL)specializedFunctionHash:(struct { unsigned char x0[32]; } *)a0 requestData:(id *)a1 constants:(id)a2 specializedName:(id)a3 completionHandler:(id /* block */)a4;
- (id)returnType;
- (id)pluginData;
- (void)setVertexAttributes:(id)a0;
- (id)newSpecializedFunctionWithRequestType:(int)a0 llvmTargetVersion:(unsigned int)a1 constants:(id)a2 functionCache:(id)a3 originalRequest:(const struct MTLCompilerFunctionRequest { void /* function */ **x0; int x1; id x2; id x3; id x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; id x9; unsigned long long x10; id x11; id x12; id x13; id x14; int x15; } *)a4 specializedName:(id)a5 error:(id *)a6;
- (id)unpackedFilePath;

@end
