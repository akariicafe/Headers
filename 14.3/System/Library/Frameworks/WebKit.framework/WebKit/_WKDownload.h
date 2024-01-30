@class NSArray, NSString, WKWebView, NSData, NSURLRequest, WKFrameInfo;

@interface _WKDownload : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<WebKit::DownloadProxy> { struct type { unsigned char __lx[384]; } data; } _download;
}

@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, weak, nonatomic) WKWebView *originatingWebView;
@property (readonly, copy, nonatomic) NSArray *redirectChain;
@property (readonly, nonatomic) BOOL wasUserInitiated;
@property (readonly, nonatomic) NSData *resumeData;
@property (readonly, nonatomic) WKFrameInfo *originatingFrame;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
