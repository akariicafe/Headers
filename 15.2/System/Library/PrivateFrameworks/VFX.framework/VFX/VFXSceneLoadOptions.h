@class NSString;

@interface VFXSceneLoadOptions : NSObject {
    void /* unknown type, empty encoding */ clientID;
    void /* unknown type, empty encoding */ systemRegistrationOptions;
}

@property (nonatomic) void /* unknown type, empty encoding */ enableRuntimeScriptCompilation;
@property (nonatomic) void /* unknown type, empty encoding */ allowLoadingFromFuture;
@property (nonatomic) void /* unknown type, empty encoding */ setupAsTemplate;
@property (nonatomic) void /* unknown type, empty encoding */ automaticallyPrepareScene;
@property (nonatomic) void /* unknown type, empty encoding */ setupAsyncRuntime;
@property (nonatomic) void /* unknown type, empty encoding */ setupRenderer;
@property (nonatomic, retain) void /* unknown type, empty encoding */ device;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commandQueue;
@property (nonatomic, copy) NSString *clientID;

- (void).cxx_destruct;
- (id)init;

@end
