@class NSURL, NSURLSessionDataTask, NSURLSession;

@interface RUIImageLoad : NSObject {
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_dataTask;
}

@property (copy, nonatomic) NSURL *URL;

- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)receivedValidResponse:(id)a0;

@end
