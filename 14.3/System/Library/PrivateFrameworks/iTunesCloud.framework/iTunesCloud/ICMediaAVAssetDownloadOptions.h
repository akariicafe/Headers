@class ICStoreRequestContext, NSString, NSMutableDictionary, NSData, NSArray, NSNumber, NSDictionary;

@interface ICMediaAVAssetDownloadOptions : NSObject {
    ICStoreRequestContext *_requestContext;
}

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *secondaryClientIdentifier;
@property (readonly, copy, nonatomic) NSMutableDictionary *httpHeaderFields;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSData *purchaseBundleMD5;
@property (copy, nonatomic) NSArray *purchaseBundleSinfs;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *redownloadParameters;
@property (copy, nonatomic) NSNumber *songID;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *mediaKind;
@property (nonatomic) BOOL canUseCellularData;
@property (nonatomic) BOOL allowDownloadOnConstrainedNetworks;
@property (readonly, copy, nonatomic) NSDictionary *optionsDictionary;

+ (id)_avDownloadOptionsWithRequestContent:(id)a0 properties:(id)a1 mediaResponseItem:(id)a2;
+ (id)_mediaKindFromResponseItemMetadata:(id)a0;
+ (void)getMediaAVAssetDownloadOptionsWithRequestContext:(id)a0 redownloadResponse:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getMediaAVAssetDownloadOptionsWithRequestContext:(id)a0 storeMediaResponseItem:(id)a1 completionHandler:(id /* block */)a2;

- (void)setValue:(id)a0 forHTTPHeaderField:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)valueForHTTPHeaderField:(id)a0;

@end
