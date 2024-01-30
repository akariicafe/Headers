@class NSArray, NSString, NSObject, MTLDebugInstrumentationData;
@protocol OS_dispatch_data, MTLDevice;

@interface AGXA11FamilyDynamicLibrary : _MTLDynamicLibrary <MTLDynamicLibrarySPI> {
    struct shared_ptr<AGX::G10::DynamicLibrary> { struct DynamicLibrary *__ptr_; struct __shared_weak_count *__cntrl_; } _impl;
}

@property (readonly) NSObject<OS_dispatch_data> *binaryData;
@property (readonly) NSArray *exportedFunctions;
@property (readonly) NSArray *exportedVariables;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSString *libraryPath;
@property (readonly) const struct { unsigned char x0[32]; } *libraryUUID;
@property (copy, nonatomic) NSArray *relocations;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, nonatomic) BOOL shaderValidationEnabled;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *installName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)binaryUniqueId;
- (id)initWithLibrary:(id)a0 binaryData:(id)a1 device:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 device:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 device:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithBinaryData:(id)a0 name:(id)a1 device:(id)a2;

@end
