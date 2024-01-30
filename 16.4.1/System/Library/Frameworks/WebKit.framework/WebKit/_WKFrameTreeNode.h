@class NSArray, NSString;

@interface _WKFrameTreeNode : WKFrameInfo <WKObject> {
    struct ObjectStorage<API::FrameTreeNode> { struct type { unsigned char __lx[480]; } data; } _node;
}

@property (readonly, nonatomic) NSArray *childFrames;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)request;
- (id)webView;
- (BOOL)isMainFrame;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)_processIdentifier;
- (id)_handle;
- (id)_parentFrameHandle;
- (id)securityOrigin;

@end
