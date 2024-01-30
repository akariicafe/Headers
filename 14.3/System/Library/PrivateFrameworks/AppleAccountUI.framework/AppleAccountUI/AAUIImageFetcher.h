@class NSURLSession;

@interface AAUIImageFetcher : NSObject {
    NSURLSession *_urlSession;
}

+ (id)sharedImageFetcher;

- (void).cxx_destruct;
- (id)_urlSession;
- (void)fetchImageAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
