@class NSString, WKWebProcessPlugInFrame;

@interface WKWebProcessPlugInRangeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleRangeHandle> { struct type { unsigned char __lx[24]; } data; } _rangeHandle;
}

@property (readonly) void *_rangeHandle;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *frame;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rangeHandleWithJSValue:(id)a0 inContext:(id)a1;

- (void)dealloc;
- (id)detectDataWithTypes:(unsigned long long)a0 context:(id)a1;

@end
