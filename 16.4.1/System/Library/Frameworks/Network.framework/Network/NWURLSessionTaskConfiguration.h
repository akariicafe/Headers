@class NSURLSessionConfiguration, NWURLSessionTask, NSURLRequest;

@interface NWURLSessionTaskConfiguration : NSObject {
    NSURLSessionConfiguration *_configuration;
    NWURLSessionTask *_task;
    NSURLRequest *_request;
}

- (void).cxx_destruct;

@end
