@class NSString, NSURL;

@interface VFXSceneLoadOptions : NSObject {
    void /* unknown type, empty encoding */ clientID;
    void /* unknown type, empty encoding */ metalLibraryURL;
    void /* unknown type, empty encoding */ systemRegistrationOptions;
}

@property (nonatomic) void /* unknown type, empty encoding */ enableRuntimeScriptCompilation;
@property (nonatomic) void /* unknown type, empty encoding */ allowLoadingFromFuture;
@property (nonatomic) void /* unknown type, empty encoding */ setupAsTemplate;
@property (nonatomic) void /* unknown type, empty encoding */ automaticallyPrepareScene;
@property (nonatomic) void /* unknown type, empty encoding */ setupAsyncRuntime;
@property (nonatomic) void /* unknown type, empty encoding */ loadBindingsMetadata;
@property (nonatomic) void /* unknown type, empty encoding */ enableParallelDecoding;
@property (nonatomic) void /* unknown type, empty encoding */ setupRenderer;
@property (nonatomic) void /* unknown type, empty encoding */ internalPixelFormatDepth;
@property (nonatomic) void /* unknown type, empty encoding */ useGammaBlending;
@property (nonatomic, retain) void /* unknown type, empty encoding */ device;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commandQueue;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) NSURL *metalLibraryURL;

- (id)init;
- (void).cxx_destruct;

@end
