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

- (void)cleanupConnectionAndDisable:(id)a0;
- (void)startConnection:(id)a0;
- (void)abort;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)initWithEndpoint:(int)a0;
- (void)connection:(id)a0 didSendBodyData:(long long)a1 totalBytesWritten:(long long)a2 totalBytesExpectedToWrite:(long long)a3;
- (void)connectionDidFinishLoading:(id)a0;
- (id)submissionURL;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)postContent:(id)a0 withHeaders:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;

@end
