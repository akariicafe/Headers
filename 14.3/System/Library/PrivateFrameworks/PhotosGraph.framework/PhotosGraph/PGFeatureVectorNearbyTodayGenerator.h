@class NSString;

@interface PGFeatureVectorNearbyTodayGenerator : PGFeatureVectorGenerator <CLLocationManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateFeatureVectorsByTypeUsingBlock:(id /* block */)a0;

@end
