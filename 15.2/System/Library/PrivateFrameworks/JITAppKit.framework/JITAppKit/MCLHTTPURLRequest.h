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

- (void)send;
- (void)sendData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleCompletion:(id)a0;
- (void)cancel;
- (void)loadRequest:(id)a0;
- (void)sendText:(id)a0;

@end
