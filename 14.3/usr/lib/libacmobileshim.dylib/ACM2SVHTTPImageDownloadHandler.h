@interface ACM2SVHTTPImageDownloadHandler : ACCHTTPHandler

+ (id)handlerWithURLString:(id)a0;

- (id)initWithURLString:(id)a0;
- (void)downloadImageWithCompletionBlock:(id /* block */)a0;

@end
