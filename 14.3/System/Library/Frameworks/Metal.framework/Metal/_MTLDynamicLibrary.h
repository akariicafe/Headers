@class NSArray, NSString, NSObject, MTLDynamicLibraryContainer;
@protocol OS_dispatch_data, MTLDevice;

@interface _MTLDynamicLibrary : _MTLObjectWithLabel <MTLDynamicLibrarySPI> {
    MTLDynamicLibraryContainer *_container;
}

@property (readonly) NSObject<OS_dispatch_data> *binaryData;
@property (readonly) NSArray *exportedFunctions;
@property (readonly) NSArray *exportedVariables;
@property (readonly) NSArray *importedSymbols;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSString *libraryPath;
@property (readonly) const struct { unsigned char x0[32]; } *libraryUUID;
@property (copy) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *installName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formattedDescription:(unsigned long long)a0;
- (id)container;
- (void)dealloc;
- (id)airData;
- (id)initWithLibrary:(id)a0 binaryData:(id)a1 device:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 device:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 device:(id)a1 error:(id *)a2;
- (BOOL)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)serializeToURL:(id)a0 error:(id *)a1;

@end
