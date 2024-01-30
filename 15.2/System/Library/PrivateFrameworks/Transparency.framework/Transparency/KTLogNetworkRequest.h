@class NSString;

@interface KTLogNetworkRequest : TransparencyNetworkRequest

@property (retain) NSString *application;

- (id)initGETWithURL:(id)a0 application:(id)a1;
- (void)createRequestForAuthentication:(id)a0 completionHandler:(id /* block */)a1;
- (id)createGETRequestForURL:(id)a0 timeout:(double)a1 error:(id *)a2;
- (id)initPOSTWithURL:(id)a0 data:(id)a1 uuid:(id)a2 application:(id)a3;
- (void)createRequestForAuthentication:(id)a0 fetchAuthNow:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
