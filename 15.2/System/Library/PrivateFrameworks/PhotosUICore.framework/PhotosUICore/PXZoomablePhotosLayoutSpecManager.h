@class NSArray, PXZoomablePhotosLayoutSpec;
@protocol PXZoomablePhotosUserDefaults;

@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec;
@property (retain, nonatomic) id<PXZoomablePhotosUserDefaults> userDefaults;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long gridStyle;

- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (id)createSpec;
- (void).cxx_destruct;
- (Class)specClass;

@end
