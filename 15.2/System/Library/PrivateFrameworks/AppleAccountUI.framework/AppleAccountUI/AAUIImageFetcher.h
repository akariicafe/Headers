@class NSURLSession;

@interface AAUIImageFetcher : NSObject {
    NSURLSession *_urlSession;
}

+ (id)sharedImageFetcher;

- (id)_urlSession;
- (void).cxx_destruct;
- (void)fetchImageAtURL:(id)a0 completionHandler:(id /* block */)a1;

@end
