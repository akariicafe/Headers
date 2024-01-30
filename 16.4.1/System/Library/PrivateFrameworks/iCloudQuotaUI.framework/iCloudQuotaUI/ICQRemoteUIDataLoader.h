@class NSString, NSURLSession;

@interface ICQRemoteUIDataLoader : NSObject <NSURLSessionTaskDelegate>

@property (retain, nonatomic) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)init;
- (void).cxx_destruct;
- (void)addHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
- (void)loadDataFromURL:(id)a0 completion:(id /* block */)a1;

@end
