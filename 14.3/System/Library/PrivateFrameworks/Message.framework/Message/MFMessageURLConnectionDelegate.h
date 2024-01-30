@class NSString, NSURLResponse, NSMutableData, EFFuture, EFPromise;

@interface MFMessageURLConnectionDelegate : NSObject <NSURLSessionDelegate> {
    NSMutableData *_responseBody;
    EFPromise *_promise;
}

@property (readonly, nonatomic) EFFuture *future;
@property (readonly, nonatomic) NSURLResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
