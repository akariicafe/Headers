@class WKSecurityOrigin, NSString, WKWebView, _WKFrameHandle, NSURLRequest;

@interface WKFrameInfo : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::FrameInfo> { struct type { unsigned char __lx[464]; } data; } _frameInfo;
}

@property (readonly, copy, nonatomic) _WKFrameHandle *_handle;
@property (readonly, copy, nonatomic) _WKFrameHandle *_parentFrameHandle;
@property (readonly, nonatomic) int _processIdentifier;
@property (readonly, nonatomic, getter=isMainFrame) BOOL mainFrame;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) WKSecurityOrigin *securityOrigin;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
