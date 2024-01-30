@class NSMapTable, NSDictionary, SCNMTLLibrary, NSObject;
@protocol OS_dispatch_group, MTLDevice, MTLLibrary, OS_dispatch_queue;

@interface SCNMTLLibraryManager : NSObject {
    id<MTLDevice> _device;
    SCNMTLLibrary *_frameworkLibrary;
    SCNMTLLibrary *_defaultLibrary;
    struct __C3DEngineStats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; double x56; unsigned int x57; double x58; unsigned int x59; double x60; double x61; double x62; double x63; double x64[60]; unsigned int x65; double x66; double x67; } *__engineStats;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_group> *_shaderCompilationGroup;
    id<MTLLibrary> _commonProfileCacheLibrary;
    NSDictionary *_commonProfilePrecompiledFunctions;
    NSMapTable *_availableLibraries;
    struct __CFDictionary { } *_availableCompiledLibraries;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _availableCompiledLibrariesLock;
}

+ (id)hashCodeForSource:(id)a0 macros:(id)a1;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (id)device;
- (id)libraryForFile:(id)a0;
- (void)_setEngineStats:(struct __C3DEngineStats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; double x56; unsigned int x57; double x58; unsigned int x59; double x60; double x61; double x62; double x63; double x64[60]; unsigned int x65; double x66; double x67; } *)a0;
- (void)clearCompiledLibraries;
- (id)commonProfileCacheLibrary;
- (id)defaultLibrary;
- (id)deviceQueue;
- (id)frameworkLibrary;
- (void)libraryForProgramDesc:(struct { struct __C3DFXMetalProgram *x0; struct __C3DMaterial *x1; struct __C3DGeometry *x2; struct __C3DFXPass *x3; struct __C3DFXPass *x4; id x5; struct __C3DBlendStates *x6; struct __C3DNode *x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; BOOL x13; id x14; struct { unsigned char x0; id /* block */ x1; } x15; unsigned long long x16; })a0 completionHandler:(id /* block */)a1;
- (id)libraryForSourceCode:(id)a0 options:(id)a1;
- (id)shaderCompilationGroup;
- (void)waitForShadersCompilation;

@end
