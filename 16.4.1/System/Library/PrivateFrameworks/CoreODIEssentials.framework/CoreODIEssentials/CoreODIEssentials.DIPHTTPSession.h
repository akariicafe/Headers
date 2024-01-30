@class NSString;

@interface CoreODIEssentials.DIPHTTPSession : NSObject <NSURLSessionTaskDelegate> {
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ anonymousURLSession;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ retrier;
    void /* unknown type, empty encoding */ overridingAltDSID;
}

@property (nonatomic, readonly) NSString *description;

- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
