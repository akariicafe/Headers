@class NSArray, NSString, NSURL, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebFrame> { struct type { unsigned char __lx[120]; } data; } _frame;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly, nonatomic) BOOL containsAnyFormElements;
@property (readonly, nonatomic) BOOL isMainFrame;
@property (readonly, nonatomic) _WKFrameHandle *handle;
@property (readonly, nonatomic) NSArray *appleTouchIconURLs;
@property (readonly, nonatomic) NSArray *faviconURLs;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lookUpFrameFromHandle:(id)a0;

- (id)_browserContextController;
- (id)_certificateChain;
- (BOOL)_hasCustomContentProvider;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)_parentFrame;
- (id)jsNodeForNodeHandle:(id)a0 inWorld:(id)a1;
- (id)_provisionalURL;
- (struct __SecTrust { } *)_serverTrust;
- (id)jsRangeForRangeHandle:(id)a0 inWorld:(id)a1;
- (id)jsContextForWorld:(id)a0;

@end
