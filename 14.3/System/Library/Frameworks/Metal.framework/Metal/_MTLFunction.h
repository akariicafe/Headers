@class NSString, NSArray, NSData, NSDictionary, NSObject, MTLType;
@protocol MTLDevice, OS_dispatch_data;

@interface _MTLFunction : _MTLObjectWithLabel <MTLFunctionSPI> {
    NSArray *_vertexAttributes;
    NSArray *_functionConstants;
    NSDictionary *_functionConstantDictionary;
    NSObject<OS_dispatch_data> *_precompiledOutput;
    MTLType *_returnType;
    NSArray *_arguments;
    struct { unsigned char key[32]; } _functionConstantSpecializationHash;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long functionType;
@property (readonly) NSString *name;
@property (readonly) struct MTLLibraryData { void /* function */ **x0; struct { unsigned char x0[32]; } x1; _Atomic int x2; id x3; id x4; } *libraryData;
@property (copy) NSString *filePath;
@property long long lineNumber;
@property (copy) NSString *unpackedFilePath;
@property (nonatomic) unsigned char bitcodeType;
@property NSData *pluginData;
@property (readonly) id vendorPrivate;
@property (readonly) unsigned long long bitCodeOffset;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property NSArray *vertexAttributes;
@property MTLType *returnType;
@property NSArray *arguments;
@property NSArray *functionConstants;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs;
@property (readonly) BOOL needsFunctionConstantValues;
@property (copy) NSString *label;
@property (readonly) unsigned long long options;
@property NSObject<OS_dispatch_data> *precompiledOutput;
@property (readonly) unsigned long long patchType;
@property (readonly) long long patchControlPointCount;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newFunctionWithPluginData:(id)a0 bitcodeType:(unsigned char)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1;
- (void)setVendorPrivate:(id)a0;
- (unsigned long long)bitCodeFileSize;
- (unsigned int)functionRef;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 binaryArchives:(id)a2;
- (id)formattedDescription:(unsigned long long)a0;
- (id)reflectionWithOptions:(unsigned long long)a0 binaryArchives:(id)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 pipelineLibrary:(id)a1;
- (void)dealloc;
- (id)reflectionWithOptions:(unsigned long long)a0;
- (id)bitcodeData;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 pipelineLibrary:(id)a2;
- (const struct { unsigned char x0[32]; } *)functionConstantSpecializationHash;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 libraryData:(struct MTLLibraryData { void /* function */ **x0; struct { unsigned char x0[32]; } x1; _Atomic int x2; id x3; id x4; } *)a2 device:(id)a3;
- (void)reflectionWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)a0 reflection:(id *)a1 functionReflection:(id)a2;
- (const struct { unsigned char x0[32]; } *)bitCodeHash;
- (id)reflectionWithOptions:(unsigned long long)a0 pipelineLibrary:(id)a1;

@end
