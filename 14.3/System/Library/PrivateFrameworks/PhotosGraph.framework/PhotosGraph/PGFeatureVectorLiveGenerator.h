@class NSString;

@interface PGFeatureVectorLiveGenerator : PGFeatureVectorGenerator <CLLocationManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateFeatureVectorsByTypeUsingBlock:(id /* block */)a0;
- (id)_nearestAssetsForCurrentDate:(id)a0 atLocation:(id)a1;

@end
