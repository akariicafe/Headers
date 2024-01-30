@class NSArray, NSURLRequest;
@protocol GKImageRequestDelegate, GKResourceDataConsumer;

@interface GKImageRequest : GKResourceRequest

@property (class, copy, nonatomic) NSArray *searchBundles;

@property (readonly, nonatomic) id<GKResourceDataConsumer> dataConsumer;
@property (readonly, copy, nonatomic) NSURLRequest *urlRequest;
@property (readonly, nonatomic) BOOL isResourceRequest;
@property (readonly, weak, nonatomic) id<GKImageRequestDelegate> delegate;

- (void)didLoadResource:(id)a0 error:(id)a1;
- (unsigned long long)cacheOptions;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)makeLoadOperation;
- (BOOL)isSystemImageRequest;
- (BOOL)isAvatarImageRequest;
- (BOOL)isContactImageRequest;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1 delegate:(id)a2;

@end
