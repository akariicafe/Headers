@class NSURL, NSURLSessionDataTask, NSURLSession;

@interface RUIImageLoad : NSObject {
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_dataTask;
}

@property (copy, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (BOOL)receivedValidResponse:(id)a0;

@end
