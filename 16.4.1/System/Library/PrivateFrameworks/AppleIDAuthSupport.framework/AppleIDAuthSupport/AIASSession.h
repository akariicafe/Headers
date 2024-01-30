@class NSString, NSMutableDictionary, NSURLSession;

@interface AIASSession : NSObject <NSURLSessionDelegate>

@property (retain) NSMutableDictionary *taskMap;
@property (retain) NSURLSession *URLSession;
@property BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)invalidateAndCancel;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)requestWithURL:(id)a0 data:(struct __CFDictionary { } *)a1 clientInfo:(id)a2 proxiedClientInfo:(id)a3 companionClientInfo:(id)a4 appleITeamId:(id)a5 appleIClientId:(id)a6 additionalHeaders:(id)a7;
- (void).cxx_destruct;
- (id)getRequest:(id)a0;

@end
