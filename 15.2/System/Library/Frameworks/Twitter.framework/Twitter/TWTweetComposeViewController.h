@interface TWTweetComposeViewController : UIViewController

@property (copy, nonatomic) id /* block */ completionHandler;

+ (BOOL)canSendTweet;

- (BOOL)addURL:(id)a0;
- (BOOL)addImage:(id)a0;
- (id)init;
- (BOOL)removeAllImages;
- (BOOL)setInitialText:(id)a0;
- (BOOL)removeAllURLs;
- (id /* block */)addDownSampledImageDataByProxyWithPreviewImage:(id)a0;
- (void)setLongitude:(double)a0 latitude:(double)a1 name:(id)a2;
- (id /* block */)addURLWithProxyPreviewImage:(id)a0;

@end
