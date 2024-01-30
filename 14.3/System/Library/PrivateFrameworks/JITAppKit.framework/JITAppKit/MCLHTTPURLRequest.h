@class NSString, NSDictionary, NSData, NSError, NSURL, MCLURLDataLoaderTask;

@interface MCLHTTPURLRequest : NSObject {
    MCLURLDataLoaderTask *_task;
}

@property (nonatomic) unsigned long long statusCode;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *httpMethod;
@property (copy, nonatomic) NSDictionary *httpHeaders;
@property (nonatomic) double timeout;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)sendData:(id)a0;
- (void)handleCompletion:(id)a0;
- (void)loadRequest:(id)a0;
- (void)send;
- (void)sendText:(id)a0;

@end
