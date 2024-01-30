@class NSURLSession, NSURLSessionTask, NSURLCredential, NSURLAuthenticationChallenge;

@interface AuthenticationServicesCore.ASWebSocket : NSObject <NSURLSessionWebSocketDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isConnected;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ webSocketTask;
    void /* unknown type, empty encoding */ connectionCompletionHandler;
    void /* unknown type, empty encoding */ testDelegate;
}

- (void)URLSession:(NSURLSession *)a0 task:(NSURLSessionTask *)a1 didReceiveChallenge:(NSURLAuthenticationChallenge *)a2 completionHandler:(void (^)(long long, NSURLCredential *))a3;
- (void)URLSession:(id)a0 webSocketTask:(id)a1 didOpenWithProtocol:(id)a2;
- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;

@end
