@class NSURLSession, NSURL, NSURLComponents, NSURLSessionDataTask;

@interface _SWCChatterboxResolver : NSObject {
    NSURLComponents *_URLComponents;
    NSURLSessionDataTask *_task;
    NSURLSession *_session;
    id /* block */ _completionHandler;
}

@property (readonly, copy) NSURL *originalURL;

+ (id)_queue;
+ (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
+ (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
+ (id)new;
+ (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
+ (id)_session;
+ (void)_invokeCompletionHandlerForTask:(id)a0 result:(id)a1 error:(id)a2;
+ (BOOL)_looksLikeAppleErrorPageURLResponse:(id)a0;
+ (BOOL)_looksLikeChatterboxURLComponents:(id)a0;
+ (id)_resolverForTask:(id)a0;
+ (void)_setResolver:(id)a0 forTask:(id)a1;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resolveWithCompletionHandler:(id /* block */)a0;

@end
