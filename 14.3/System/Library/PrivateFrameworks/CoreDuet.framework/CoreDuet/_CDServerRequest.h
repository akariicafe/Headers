@class NSURLSession, NSString, NSMutableURLRequest, NSOperationQueue, NSHTTPURLResponse, NSMutableData;

@interface _CDServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    id /* block */ _responseHandler;
    NSOperationQueue *_sessionQueue;
    NSURLSession *_session;
    NSMutableURLRequest *_request;
    NSHTTPURLResponse *_httpResponse;
    NSMutableData *_responseData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;

@end
