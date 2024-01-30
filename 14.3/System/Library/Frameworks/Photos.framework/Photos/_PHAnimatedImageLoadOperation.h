@class PHAnimatedImage, NSURL;

@interface _PHAnimatedImageLoadOperation : NSOperation {
    long long _cacheStrategy;
    BOOL _useSharedImageDecoding;
    NSURL *_animatedImageURL;
}

@property (retain) PHAnimatedImage *animatedImage;

+ (id)_removeOperation:(long long)a0;
+ (void)_registerOperation:(id)a0 forRequestID:(long long)a1;
+ (id)_animatedImageSharedLoadingQueue;
+ (id)_inq_animatedImageLoadingOperations;
+ (id)_requestIsolationQueue;
+ (long long)nextRequestID;

- (void).cxx_destruct;
- (void)main;
- (id)initWithURL:(id)a0 cachingStrategy:(long long)a1 useSharedDecoding:(BOOL)a2;

@end
