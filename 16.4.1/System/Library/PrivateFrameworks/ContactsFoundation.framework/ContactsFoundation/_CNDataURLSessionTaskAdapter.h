@class NSString;

@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate>

@property (copy) id /* block */ onDataReceived;
@property (copy) id /* block */ onCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;

@end
