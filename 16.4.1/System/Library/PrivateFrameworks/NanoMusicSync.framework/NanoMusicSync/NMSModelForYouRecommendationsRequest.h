@class NSArray, NSDictionary;

@interface NMSModelForYouRecommendationsRequest : MPModelForYouRecommendationsRequest

@property (nonatomic) BOOL nms_useCachedDataOnly;
@property (retain, nonatomic) NSArray *nms_cachedRecommendationsArray;
@property (retain, nonatomic) NSDictionary *nms_cachedStoreItemMetadataResults;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
