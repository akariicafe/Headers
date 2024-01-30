@class MTLDebugInstrumentationData, NSArray, NSString, NSData, NSObject, MTLLoadedFile;
@protocol MTLDevice, OS_dispatch_data;

@interface MTLDynamicLibraryContainer : NSObject {
    MTLLoadedFile *_fileMapping;
    id<MTLDevice> _device;
    NSObject<OS_dispatch_data> *_vendorData;
    NSArray *_exportedFunctions;
    NSArray *_exportedVariables;
    NSArray *_importedSymbols;
    NSArray *_importedLibraries;
    NSString *_installName;
    NSData *_airData;
    unsigned long long _bitcodeOffset;
    unsigned long long _bitcodeSize;
    unsigned long long _airOffset;
    unsigned long long _airSize;
    int _airVersion;
    struct { unsigned char key[32]; } _libraryUUID;
    MTLDebugInstrumentationData *_debugInstrumentationData;
}

- (oneway void)release;
- (void)dealloc;
- (id)airData;
- (id)initWithLibrary:(struct MTLLibraryData { void /* function */ **x0; struct { unsigned char x0[32]; } x1; _Atomic int x2; id x3; id x4; } *)a0 binaryData:(id)a1 device:(id)a2 error:(id *)a3;
- (id)initWithURL:(id)a0 device:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)serializeToURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
