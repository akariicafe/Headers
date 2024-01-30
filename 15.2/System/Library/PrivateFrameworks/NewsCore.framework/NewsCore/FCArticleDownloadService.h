@protocol FCFlintHelper, FCContentContext;

@interface FCArticleDownloadService : NSObject <FCArticleDownloadServiceType>

@property (readonly, nonatomic) id<FCContentContext> context;
@property (readonly, nonatomic) id<FCFlintHelper> flintHelper;

- (void).cxx_destruct;
- (id)init;
- (id)fetchCachedArticleWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)downloadArticleWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithContext:(id)a0 flintHelper:(id)a1;

@end
