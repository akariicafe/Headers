@class NSArray, NSString;

@interface _WKFrameTreeNode : WKFrameInfo <WKObject> {
    struct ObjectStorage<API::FrameTreeNode> { struct type { unsigned char __lx[368]; } data; } _node;
}

@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_handle;
- (void)dealloc;
- (id)securityOrigin;
- (id)_parentFrameHandle;
- (id)request;
- (BOOL)isMainFrame;

@end
