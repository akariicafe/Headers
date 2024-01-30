@class NSArray, NSURLSession;

@interface ICQNetworkRequestController : NSObject {
    NSURLSession *_session;
    NSArray *_numberOfSecondsBetweenRetries;
}

- (id)init;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)executeRequest:(id)a0 acceptedStatusCodes:(id)a1 completion:(id /* block */)a2;
- (id)initWithSession:(id)a0 numberOfSecondsBetweenRetries:(id)a1;

@end
