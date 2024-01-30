@class PXRelatedSpec;

@interface PXRelatedSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXRelatedSpec *spec;

- (Class)specClass;

@end
