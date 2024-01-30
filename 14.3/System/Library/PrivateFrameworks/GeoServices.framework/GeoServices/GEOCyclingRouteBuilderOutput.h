@class GEOElevationProfile;

@interface GEOCyclingRouteBuilderOutput : GEORouteBuilderOutput {
    GEOElevationProfile *_elevationProfile;
}

- (void).cxx_destruct;
- (id)elevationProfile;
- (id)initWithGEORouteBuilderOutput:(id)a0;
- (void)setElevationProfile:(id)a0;

@end
