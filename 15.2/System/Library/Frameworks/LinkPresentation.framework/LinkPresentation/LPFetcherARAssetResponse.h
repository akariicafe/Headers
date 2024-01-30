@class LPARAsset, NSString;

@interface LPFetcherARAssetResponse : LPFetcherResponse <LPFetcherURLResponse>

@property (readonly, retain, nonatomic) LPARAsset *arAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidMIMEType:(id)a0;
+ (id)responseForFetcher:(id)a0 withData:(id)a1 MIMEType:(id)a2;
+ (id)arAssetPropertiesForFetcher:(id)a0;

- (void).cxx_destruct;
- (id)initWithARAsset:(id)a0 fetcher:(id)a1;

@end
