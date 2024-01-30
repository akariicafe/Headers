@interface FMClient.HttpClient : NSObject <NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ authenticationChallengeHandler;
    void /* unknown type, empty encoding */ httpSuccessCodeMin;
    void /* unknown type, empty encoding */ httpSuccessCodeMax;
    void /* unknown type, empty encoding */ endpoint;
    void /* unknown type, empty encoding */ statusCodeHandlers;
    void /* unknown type, empty encoding */ statusCodeHandlerQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_session;
}

- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
