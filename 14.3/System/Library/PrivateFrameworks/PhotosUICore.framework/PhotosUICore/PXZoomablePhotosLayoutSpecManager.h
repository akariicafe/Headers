@class NSArray, PXZoomablePhotosLayoutSpec;
@protocol PXZoomablePhotosUserDefaults;

@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec;
@property (retain, nonatomic) id<PXZoomablePhotosUserDefaults> userDefaults;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;

- (Class)specClass;
- (void).cxx_destruct;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (id)createSpec;

@end
