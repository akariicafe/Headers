@class NSURLSession, TransparencyAuthentication, TransparencyLogSessionDelegate, NSObject;
@protocol OS_dispatch_workloop;

@interface TransparencyLogSession : NSObject

@property (retain) NSURLSession *backgroundSession;
@property (retain) NSURLSession *foregroundSession;
@property (retain) NSObject<OS_dispatch_workloop> *callbackWorkloop;
@property (retain) NSObject<OS_dispatch_workloop> *networkingWorkloop;
@property (retain) TransparencyLogSessionDelegate *delegate;
@property (retain) TransparencyAuthentication *auth;
@property unsigned long long fetchCount;

+ (void)dispatchToQueue:(id)a0 block:(id /* block */)a1;
+ (id)createErrorFromURLResonse:(id)a0 data:(id)a1 allowEmptyData:(BOOL)a2 error:(id)a3;

- (id)createAuthenticatedForegroundSession;
- (void)cancelDownloadId:(id)a0;
- (void)download:(id)a0 retry:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)createAuthenticatedBackgroundSession:(id)a0 delegateQueue:(id)a1;
- (id)initWithWorkloop:(id)a0 sessionDelegate:(id)a1;
- (BOOL)fetch:(id)a0 completionHandler:(id /* block */)a1;

@end
