@class NSURL, NSString, _TVURLSessionDownloadTaskWrapper;

@interface VUILayeredImageProxy : NSObject {
    _TVURLSessionDownloadTaskWrapper *_downloadTaskWrapper;
}

@property (getter=isCancelled) BOOL cancelled;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long groupType;
@property (readonly, copy, nonatomic) NSString *assetKey;

+ (id)_loadingQueue;

- (id)initWithURL:(id)a0;
- (BOOL)isLoading;
- (void)cancel;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)loadWithCompletion:(id /* block */)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 groupType:(long long)a1 assetKey:(id)a2;
- (id)_assetPathWithAssetKey:(id)a0;
- (id)initWithURL:(id)a0 groupType:(long long)a1;
- (BOOL)isImageAvailable;

@end
