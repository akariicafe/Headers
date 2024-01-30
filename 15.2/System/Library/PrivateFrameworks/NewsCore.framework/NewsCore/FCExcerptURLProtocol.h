@class FCCKContentFetchOperation;

@interface FCExcerptURLProtocol : NSURLProtocol

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation;

+ (BOOL)canInitWithRequest:(id)a0;
+ (void)initialize;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)unregister;
+ (BOOL)canHandleURL:(id)a0;
+ (BOOL)canHandleURLWithComponents:(id)a0;
+ (id)excerptURLForArticleID:(id)a0 changeTag:(id)a1;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (void)setupWithArticleDatabase:(id)a0;

- (void)startLoading;
- (void).cxx_destruct;
- (void)stopLoading;

@end
