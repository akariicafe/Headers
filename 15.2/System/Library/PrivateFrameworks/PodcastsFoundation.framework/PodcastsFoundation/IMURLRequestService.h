@class NSURLRequest;
@protocol AMSURLProtocolDelegate, NSURLSessionDelegate;

@interface IMURLRequestService : IMBaseStoreService

@property (retain, nonatomic) id<NSURLSessionDelegate, AMSURLProtocolDelegate> urlSessionDelegate;
@property (retain, nonatomic) NSURLRequest *mutableRequest;

- (void)performRequest:(id /* block */)a0;
- (void).cxx_destruct;

@end
