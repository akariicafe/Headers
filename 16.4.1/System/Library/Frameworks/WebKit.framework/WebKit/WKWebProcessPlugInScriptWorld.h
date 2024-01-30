@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> { struct type { unsigned char __lx[32]; } data; } _world;
}

@property (readonly) void *_scriptWorld;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)world;
+ (id)normalWorld;

@end
