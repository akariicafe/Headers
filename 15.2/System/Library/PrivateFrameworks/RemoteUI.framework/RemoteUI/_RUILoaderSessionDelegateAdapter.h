@class NSString, NSObject;
@protocol NSURLSessionTaskDelegate;

@interface _RUILoaderSessionDelegateAdapter : NSObject <NSURLSessionTaskDelegate>

@property (weak, nonatomic) NSObject<NSURLSessionTaskDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;

@end
