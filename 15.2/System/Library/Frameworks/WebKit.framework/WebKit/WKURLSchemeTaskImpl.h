@class NSString, NSURLRequest, WKFrameInfo;

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {
    struct ObjectStorage<WebKit::WebURLSchemeTask> { struct type { unsigned char __lx[616]; } data; } _urlSchemeTask;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _requestOnlyIfCached;
@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, copy, nonatomic) NSURLRequest *request;

- (void)didReceiveResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)_willPerformRedirection:(id)a0 newRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)_didPerformRedirection:(id)a0 newRequest:(id)a1;
- (id)init;
- (void)didFinish;
- (void)didReceiveData:(id)a0;
- (void)dealloc;

@end
