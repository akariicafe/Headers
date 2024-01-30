@interface FMNetworking.FMNHttpClient : NSObject <NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ authenticationChallengeHandler;
    void /* unknown type, empty encoding */ bundleIdentifierFallback;
    void /* unknown type, empty encoding */ httpSuccessCodeMin;
    void /* unknown type, empty encoding */ httpSuccessCodeMax;
    void /* unknown type, empty encoding */ credential;
    void /* unknown type, empty encoding */ urlSessionFactory;
    void /* unknown type, empty encoding */ statusCodeHandlers;
    void /* unknown type, empty encoding */ statusCodeHandlerQueue;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ sessionLock;
}

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
