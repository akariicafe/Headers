@class NSString, NSURL;

@interface SLExternalServiceGatekeeper : NSObject <NSURLSessionTaskDelegate> {
    NSString *_redirectHost;
    NSURL *_url;
    id /* block */ _completion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)_completeWithURLToLoad:(id)a0 error:(id)a1;
- (BOOL)_gatekeepingIsNotAvailable;
- (id)initForPermissionToAccessURL:(id)a0 fromURLString:(id)a1 completion:(id /* block */)a2;

@end
