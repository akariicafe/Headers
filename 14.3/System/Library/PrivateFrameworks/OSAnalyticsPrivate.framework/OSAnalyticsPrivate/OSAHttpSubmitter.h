@class NSHTTPURLResponse, NSURL, NSMutableData, NSURLConnection, NSObject;
@protocol OS_dispatch_semaphore;

@interface OSAHttpSubmitter : OSASubmitter {
    NSURL *_submissionURL;
    NSURLConnection *_connection;
    NSHTTPURLResponse *_response;
    NSMutableData *_payload;
    NSObject<OS_dispatch_semaphore> *_submissionSem;
    unsigned int _thoughput_warnings;
    double _last_thoughput_check;
}

- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void).cxx_destruct;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (id)initWithEndpoint:(int)a0;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)abort;
- (void)startConnection:(id)a0;
- (void)postContent:(id)a0 withHeaders:(id)a1;
- (id)submissionURL;
- (void)cleanupConnectionAndDisable:(id)a0;

@end
