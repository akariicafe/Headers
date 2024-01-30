@class NSURLRequest;
@protocol AMSURLProtocolDelegate, NSURLSessionDelegate;

@interface IMURLRequestService : IMBaseStoreService

@property (retain, nonatomic) id<NSURLSessionDelegate, AMSURLProtocolDelegate> urlSessionDelegate;
@property (retain, nonatomic) NSURLRequest *mutableRequest;

- (void).cxx_destruct;
- (void)performRequest:(id /* block */)a0;

@end
