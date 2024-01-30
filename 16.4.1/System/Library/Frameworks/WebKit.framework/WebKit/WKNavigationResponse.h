@class NSString, NSURLResponse, NSURLRequest, WKFrameInfo;

@interface WKNavigationResponse : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationResponse> { struct type { unsigned char __lx[640]; } data; } _navigationResponse;
}

@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, nonatomic) NSURLRequest *_request;
@property (readonly, nonatomic) NSString *_downloadAttribute;
@property (readonly, nonatomic, getter=isForMainFrame) BOOL forMainFrame;
@property (readonly, copy, nonatomic) NSURLResponse *response;
@property (readonly, nonatomic) BOOL canShowMIMEType;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
