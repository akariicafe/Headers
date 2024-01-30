@class WKWebProcessPlugInNodeHandle, NSString;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> { struct type { unsigned char __lx[152]; } data; } _hitTestResult;
}

@property (readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
