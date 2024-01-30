@class NSURLRequest, NSURLSessionTask, NSURLSession;

@interface _UINSURLRequestImageLoader : _UIImageLoader {
    NSURLRequest *_request;
    NSURLSession *_session;
    NSURLSessionTask *_task;
}

- (id)_error;
- (void)_really_loadImage:(id /* block */)a0;
- (id)initWithURLRequest:(id)a0 session:(id)a1;
- (BOOL)_really_cancel;
- (void).cxx_destruct;

@end
