@class NSSet, _WKWebExtensionControllerConfiguration, NSString;
@protocol _WKWebExtensionControllerDelegate;

@interface _WKWebExtensionController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionController> { struct type { unsigned char __lx[120]; } data; } _webExtensionController;
}

@property (readonly, nonatomic) void *_webExtensionController;
@property (weak, nonatomic) id<_WKWebExtensionControllerDelegate> delegate;
@property (readonly, copy, nonatomic) _WKWebExtensionControllerConfiguration *configuration;
@property (readonly, copy, nonatomic) NSSet *extensions;
@property (readonly, copy, nonatomic) NSSet *extensionContexts;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)extensionContextForExtension:(id)a0;
- (BOOL)loadExtensionContext:(id)a0 error:(id *)a1;
- (BOOL)unloadExtensionContext:(id)a0 error:(id *)a1;

@end
