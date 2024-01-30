@class NSString;

@interface WKWebProcessPlugInPageGroup : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPageGroupProxy> { struct type { unsigned char __lx[40]; } data; } _bundlePageGroup;
}

@property (readonly) NSString *identifier;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
