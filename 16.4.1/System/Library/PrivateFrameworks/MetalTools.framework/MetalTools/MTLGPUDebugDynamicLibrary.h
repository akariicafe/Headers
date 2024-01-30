@class MTLGPUDebugImageData, NSArray, NSString, NSObject, MTLDebugInstrumentationData;
@protocol OS_dispatch_data, MTLDevice;

@interface MTLGPUDebugDynamicLibrary : MTLToolsDynamicLibrary <MTLDynamicLibrarySPI>

@property (readonly, nonatomic) MTLGPUDebugImageData *imageData;
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

- (void)dealloc;
- (void)prepareForUsage;
- (id)initWithDynamicLibrary:(id)a0 device:(id)a1;

@end
