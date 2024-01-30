@class NSString, NSProgress, WKWebView, NSURLRequest;
@protocol WKDownloadDelegate;

@interface WKDownload : NSObject <WKObject, NSProgressReporting> {
    struct ObjectStorage<WebKit::DownloadProxy> { struct type { unsigned char __lx[416]; } data; } _download;
    struct WeakObjCPtr<id<WKDownloadDelegate>> { id m_weakReference; } _delegate;
}

@property (readonly, nonatomic) NSURLRequest *originalRequest;
@property (readonly, weak, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WKDownloadDelegate> delegate;
@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

@end
