@interface NMSModelEditorialRecommendationsRequest : MPModelStoreBrowseRequest

@property (nonatomic) BOOL nms_useCachedDataOnly;
@property (retain, nonatomic) id nms_cachedLoadedOutput;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
