@class NSString, EMRemoteContentURLSession;
@protocol EFScheduler;

@interface EMRemoteContentURLSchemeHandler : NSObject <WKURLSchemeHandler> {
    id<EFScheduler> _scheduler;
    EMRemoteContentURLSession *_session;
}

@property (readonly, nonatomic) BOOL allowProxying;
@property (readonly, nonatomic) NSString *schemePrefix;
@property (readonly, nonatomic) NSString *remoteContentHTTPScheme;
@property (readonly, nonatomic) NSString *remoteContentHTTPSScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataTaskForRequest:(id)a0 withSchemePrefix:(id)a1 session:(id)a2 scheduler:(id)a3 allowProxying:(BOOL)a4 cancelationToken:(id *)a5 completionHandler:(id /* block */)a6;

- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 schemePrefix:(id)a1 allowProxying:(BOOL)a2;
- (void)setOnWebViewConfiguration:(id)a0;

@end
