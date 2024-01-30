@class NSString, NSURLRequest, WKFrameInfo;

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {
    struct ObjectStorage<API::URLSchemeTask> { struct type { unsigned char __lx[24]; } data; } _urlSchemeTask;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _requestOnlyIfCached;
@property (readonly, nonatomic) WKFrameInfo *_frame;
@property (readonly, copy, nonatomic) NSURLRequest *request;

- (void)didReceiveData:(id)a0;
- (void)dealloc;
- (void)_didPerformRedirection:(id)a0 newRequest:(id)a1;
- (void)didFailWithError:(id)a0;
- (void)didReceiveResponse:(id)a0;
- (void)didFinish;

@end
