@class NSArray, NSString, WKWebView, NSData, NSURLRequest, WKFrameInfo;

@interface _WKDownload : NSObject <WKObject, NSCopying> {
    struct RetainPtr<WKDownload> { void *m_ptr; } _download;
}

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, weak, nonatomic) WKWebView *originatingWebView;
@property (readonly, copy, nonatomic) NSArray *redirectChain;
@property (readonly, nonatomic) BOOL wasUserInitiated;
@property (readonly, nonatomic) NSData *resumeData;
@property (readonly, nonatomic) WKFrameInfo *originatingFrame;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadWithDownload:(id)a0;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithDownload2:(id)a0;
- (void)publishProgressAtURL:(id)a0;

@end
