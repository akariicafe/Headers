@class NSArray, NSURLRequest;
@protocol GKImageRequestDelegate, GKResourceDataConsumer;

@interface GKImageRequest : GKResourceRequest

@property (class, copy, nonatomic) NSArray *searchBundles;

@property (readonly, nonatomic) id<GKResourceDataConsumer> dataConsumer;
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) BOOL isResourceRequest;
@property (readonly, weak, nonatomic) id<GKImageRequestDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isAvatarImageRequest;
- (unsigned long long)cacheOptions;
- (id)makeLoadOperation;
- (BOOL)isContactImageRequest;
- (BOOL)isSystemImageRequest;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1 delegate:(id)a2;
- (void)didLoadResource:(id)a0 error:(id)a1;
- (id)description;

@end
